#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

/**
 * \brief Encryption class
 */
class Encryption
{
protected:
	ifstream inFile;
	ofstream outFile;
	int key;
public:
	/**
	 * \brief Encryption class constructor
	 * \param inFileName Input file
	 * \param outFileName Output file
	 * \param key Encryption key
	 */
	Encryption(const string& inFileName, const string& outFileName, const int& key);

	virtual ~Encryption();

	/**
	 * \brief Encodes the input character
	 * \param ch Character to encrypt
	 * \return Encrypted character
	 */
	virtual char transformEncode(char ch) const = 0;

	/**
	 * \brief Decodes the input character
	 * \param ch Character to decrypt
	 * \return Decrypted character
	 */
	virtual char transformDecode(char ch) const = 0;

	/**
	 * \brief Encodes the input file
	 */
	virtual void encrypt() final;

	/**
	 * \brief Decodes the input file
	 */
	virtual void decrypt() final;

	/**
	 * \brief Sets the encryption key
	 */
	void setKey(int);
};

/**
 * \brief Encruption constructor
 * \param inFileName File input
 * \param outFileName File output
 * \param key Encryption key used to encrypt/decrypt and produce an output file
 */
Encryption::Encryption(const string& inFileName, const string& outFileName, const int& key)
{
	inFile.open(inFileName);
	outFile.open(outFileName);
	this->key = key;

	if (!inFile)
	{
		cout << "The file " << inFileName << " cannot be opened.";
		exit(1);
	}
	if (!outFile)
	{
		cout << "The file " << outFileName << " cannot be opened.";
		exit(1);
	}
}

/**
 * \brief Destructor function that closes all files
 */
Encryption::~Encryption()
{
	inFile.close();
	outFile.close();
}


/**
 * \brief Encrypt member function that uses a virtual transform encode function to transform the characters and writes a file
 */
void Encryption::encrypt()
{
	char ch;
	char transCh;
	inFile.get(ch);
	while (!inFile.fail())
	{
		transCh = transformEncode(ch);
		outFile.put(transCh);
		inFile.get(ch);
	}
}

/**
 * \brief Decrypt member function that uses a virtual transform decode function to transform the characters and writes a file
 */
void Encryption::decrypt()
{
	char ch;
	char transCh;
	inFile.get(ch);
	while (!inFile.fail())
	{
		transCh = transformDecode(ch);
		outFile.put(transCh);
		inFile.get(ch);
	}
}

/**
 * \brief Subclass of Encryption class to override the pure virtual functions. This class will encrypt and decrypt using a Caesar cipher
 */
class SimpleEncryption : public Encryption
{
public:
	/**
	 * \brief Encoder function
	 * \param ch Character to be encoded
	 * \return Encoded character
	 */
	char transformEncode(char ch) const override
	{
		return ch + key;
	}

	/**
	 * \brief Decoder function
	 * \param ch Character to be decoded
	 * \return Decoded character
	 */
	char transformDecode(char ch) const override
	{
		return ch - key;
	}

	/**
	 * \brief SimpleEncryption constructor
	 * \param inFileName File input
	 * \param outFileName File output
	 * \param key Encryption/decryption key
	 */
	SimpleEncryption(const string& inFileName, const string& outFileName, const int& key) : Encryption(
		inFileName, outFileName, key)
	{
	}
};

/**
 * \brief Main function
 * \return Graceful program exit
 */
int main()
{
	string inFileName;
	string outFileName;
	string input;
	int key;
	bool exit = false;
	/**
	 *\brief Menu loop
	 */
	while (!exit)
	{
		cout << "Select encryption/decryption mode: " << endl;
		cout << "[E] Encryption" << endl;
		cout << "[D] Decryption" << endl;
		cout << "[Q] Quit" << endl;
		cin >> input;
		/**
		 * \brief Encryption mode
		 */
		if (input == "E" || input == "e")
		{
			cout << "Enter the name of the input file: ";
			cin >> inFileName;
			cout << "Enter the name of the output file: ";
			cin >> outFileName;
			cout << "Enter the key: ";
			cin >> key;

			SimpleEncryption encrypt(inFileName, outFileName, key);
			encrypt.encrypt();
		}
		/**
		 * \brief Decryption mode
		 */
		else if (input == "D" || input == "d")
		{
			cout << "Enter the name of the input file: ";
			cin >> inFileName;
			cout << "Enter the name of the output file: ";
			cin >> outFileName;
			cout << "Enter the key: ";
			cin >> key;

			SimpleEncryption decrypt(inFileName, outFileName, key);
			decrypt.decrypt();
		}
		/**
		 * Exit loop
		 */
		else if (input == "Q" || input == "q")
		{
			cout << "Exiting...";
			exit = true;
		}
		/**
		 * Invalid input validator
		 */
		else
		{
			cout << "Invalid input. Please try again." << endl;
		}
	}
	return 0;
}
