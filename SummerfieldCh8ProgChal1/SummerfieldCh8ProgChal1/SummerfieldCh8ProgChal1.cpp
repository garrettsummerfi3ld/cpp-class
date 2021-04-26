#include <iostream>

using namespace std;

const int SIZE = 20;
int countPerfect();
int totalScores = 0;
int scores[SIZE];

int main()
{
	cout << "Perfect Score Calculator" << endl;

	// User input for inputting all scores into the array
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[" << totalScores + 1 << "] " << "Input a numeric grade: ";
		cin >> scores[i];
		totalScores++;

		// If the user is done inputting scores, then this will end the loop and write the rest of the array as zero
		if (scores[i] == -1)
		{
			cout << "Exiting input!" << endl;
			totalScores--;
			while (i > SIZE)
			{
				scores[i] = 0;
				i++;
			}
			break;
		}
	}

	cout << "Out of " << totalScores << " scores, only " << countPerfect() << " were perfect scores";

	system("pause");

	return 0;
}

// Counts perfect scores from the defined array, returns an int
int countPerfect()
{
	int countPerfectScores = 0;

	for (int i = 0; i < totalScores; i++)
	{
		if (scores[i] == 100)
		{
			countPerfectScores++;
		}
	}

	return countPerfectScores;
}