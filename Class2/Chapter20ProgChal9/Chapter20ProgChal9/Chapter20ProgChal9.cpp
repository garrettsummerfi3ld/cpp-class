#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

enum Gender { male, female };

/**
 * \brief A class of a person in a family tree.
 */
class Person
{
	string name;
	Gender gender;
	vector<Person*> parents;
	vector<Person*> children;
	void addParent(Person* p) { parents.push_back(p); }

public:
	/**
	 * \brief Person constructor
	 * \param name Person's name
	 * \param g Person's gender
	 */
	Person(string name, Gender g)
	{
		this->name = name;
		gender = g;
	}

	Person* addChild(string name, Gender g);
	Person* addChild(Person* p);
	friend ostream& operator <<(ostream& out, Person p);

	// Member functions for getting various Person info
	string getName() const { return name; };
	Gender getGender() const { return gender; };
	int getNumChildren() const { return children.size(); }
	int getNumParents() const { return parents.size(); }
	Person* getChild(int k) const;
	Person* getParent(int k) const;
};

/**
 * \brief Adds a child to a person.
 * \param name Child's name
 * \param g Child's gender
 * \return Child's Person object
 */
Person* Person::addChild(string name, Gender g)
{
	auto child = new Person(name, g);
	child->addParent(this);
	children.push_back(child);
	return child;
}


/**
 * \brief Adds a child to a person.
 * \param child Child's Person object
 * \return child's Person object
 */
Person* Person::addChild(Person* child)
{
	child->addParent(this);
	children.push_back(child);
	return child;
}

/**
 * \brief Gets parents of a person
 * \param k Parent number in the list of parents
 * \return parent's Person object
 */
Person* Person::getParent(int k) const
{
	if (k < 0 || k >= parents.size())
	{
		cout << "Error indexing parents vector." << endl;
		exit(1);
	}
	return parents[k];
}

/**
 * \brief Gets child of a person
 * \param k Child number in the list of children
 * \return child's Person object
 */
Person* Person::getChild(int k) const
{
	if (k < 0 || k >= children.size())
	{
		cout << "Error indexing children's vector." << endl;
		exit(1);
	}
	return children[k];
}

/**
 * \brief Gets all cousins from a family tree
 * \param p Person object
 * \return A vector of cousins
 */
vector<Person*> getCousins(Person* p)
{
	vector<Person*> cousins;
	// Get the parents of this person
	for (int i = 0; i < p->getNumParents(); i++)
	{
		// Get the parents of this parent
		for (int j = 0; j < p->getParent(i)->getNumParents(); j++)
		{
			// Get the children of this parent
			for (int k = 0; k < p->getParent(i)->getParent(j)->getNumChildren(); k++)
			{
				// Check if there is an already existing cousin in the vector
				if (count(cousins.begin(), cousins.end(), p->getParent(i)->getParent(j)->getChild(k)) == 0)
				{
					// Add the child to the cousins vector
					cousins.push_back(p->getParent(i)->getParent(j)->getChild(k));
				}
			}
		}
	}
	return cousins;
}

/**
 * \brief Modifies output stream to accomodate for parents and children
 * \param out output stream
 * \param p Person
 * \return output stream after being modified
 */
ostream& operator<<(ostream& out, Person p)
{
	out << "<person name = " << p.name << ">" << '\n';
	if (p.parents.size() > 0)
		out << "   <parents>" << ' ';
	for (int k = 0; k < p.parents.size(); k++)
	{
		out << " " << p.parents[k]->name << ' ';
	}
	if (p.parents.size() > 0)
		out << " </parents>" << "\n";
	if (p.children.size() > 0)
		out << "   <children>" << ' ';
	for (int k = 0; k < p.children.size(); k++)
	{
		out << " " << p.children[k]->name << ' ';
	}
	if (p.children.size() > 0)
		out << " </children>" << "\n";
	out << "</person>" << "\n";
	return out;
}

/**
 * \brief Test harness for the Person class
 * \param argc Unused argument
 * \param argv Unused argument
 * \return Graceful program exit
 */
int main(int argc, char** argv)
{
	// Here are the people
	Person adam("Adam", male);
	Person eve("Eve", female);
	Person joan("Joan", female);

	// Adam and Eve are parents of Abel
	Person* pAbel = eve.addChild(new Person("Abel", male));
	adam.addChild(pAbel);

	// Abel and Joan are parents of Missy
	Person* pMissy = joan.addChild("Missy", female);
	pAbel->addChild(pMissy);

	// Output all the people
	cout << "Here are all the people:\n\n";
	cout << adam << "\n" << eve << "\n";
	cout << *pAbel << "\n" << joan << "\n";
	cout << *pMissy << "\n";

	// Print parents of Missy
	cout << "Missy's parents are: " << endl;
	for (unsigned int k = 0; k < pMissy->getNumParents(); k++)
	{
		Person* p = pMissy->getParent(k);
		switch (p->getGender())
		{
		case female: cout << "\tMother: ";
			break;
		case male: cout << "\tFather: ";
			break;
		}
		cout << p->getName() << endl;
	}

	// Print cousins of Missy
	cout << "Missy's cousins are: " << endl;
	for (auto p : getCousins(pMissy))
	{
		cout << "\t" << p->getName() << endl;
	}
	return 0;
}
