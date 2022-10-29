#include <fstream>
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	// Create a map of strings and ints
	map<string, int> wordFreq;

	// Create file streams
	ifstream inFile;
	ofstream outFile;

	// Open files for input and output
	inFile.open("Chapter17ProgChal7.txt");
	outFile.open("index.txt");

	// If either file does not open correctly, end program.
	if (!inFile || !outFile)
	{
		cout << "Error opening file. Program terminating." << endl;
		return 1;
	}

	// While not at the end of the file, input a word into the map, and increment the count
	while (!inFile.eof())
	{
		string word;
		inFile >> word;
		wordFreq[word]++;
	}

	// Output counts of each word to the output of the file
	for (auto it = wordFreq.begin(); it != wordFreq.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
		outFile << it->first << ": " << it->second << endl;
	}

	// Close files
	inFile.close();
	outFile.close();

	return 0;
}
