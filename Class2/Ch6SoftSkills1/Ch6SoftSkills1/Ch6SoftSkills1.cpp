#include <iostream>
#include <vector>
#include <numeric>


using namespace std;

void getScore(vector<float>& scores)
{
	float scoreNum;
	float score;
	bool boolean = true;


	cout << "How many scores do you have? " << endl;
	cin >> scoreNum;

	while (boolean)
	{
		if (scoreNum > 0)
		{
			boolean = false;
		}
		else
		{
			cout << "This is not an acceptable value, please enter a value above zero." << endl;
			cin >> scoreNum;
		}
	}

	for (int i = 0; i < scoreNum; i++)
	{
		cout << "Enter a score: " << endl;
		cin >> score;

		if ((score >= 0) && (score <= 100))
		{
			scores.push_back(score);
		}
		else
		{
			bool check = true;

			while (check)
			{
				cout << "Score entered was incorrect, please check value entered and try again: " << endl;
				cin >> score;


				if ((score >= 0) && (score <= 100))
				{
					scores.push_back(score);
					check = false;
				}
			}
		}
	}
}

float findLowest(vector<float> floatVector)
{
	float min = floatVector[0];

	for (int i = 0; i < floatVector.size(); i++)
	{
		if (floatVector[i] < min)
		{
			min = floatVector[i];
		}
	}

	cout << "The minimum value is: " << min << endl;
	return min;
}

void calcAverage(vector<float> aVector)
{
	float lowest = findLowest(aVector);

	for (int j = 0; j < aVector.size(); j++)
	{
		if (aVector[j] == lowest)
		{
			int index = j;
			aVector.erase(aVector.begin() + index);
			break;
		}
	}
	float size = aVector.size();
	float averageScore = accumulate(aVector.begin(), aVector.end(), 0) / size;
	cout << "The sum of the exam scores is: " << accumulate(aVector.begin(), aVector.end(), 0) << endl;
	cout << "The average score is: " << averageScore << endl;
}


int main()
{
	vector<float> scoreVec;
	getScore(scoreVec);
	calcAverage(scoreVec);
}
