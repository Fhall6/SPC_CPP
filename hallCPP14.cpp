// Frank Hall III
// January 24, 2023 ©
// Project: Chapter 6 Program
/* Description:
 *
 *
 * Write a program to satisfy the requirements in Starting Out with
 * C++ Chapter 6 #11 Programming Challenge: Lowest Score Drop at the
 * end of the Chapter.
 *
 * You must use the stated functions and complete the Input Validation.
 * DO NOT use an array or global variables! You must use function prototyping.
 *
 * Test your function twice, first with 100, 90, 80, 70, and 60 and then
 * with 60, 70, 80, 90, and 100. The result for both runs should be 85. For
 * full credit, also display what the lowest score was with good output description.
 *
 *
 * Write a program that calculates the average of a group of test scores, where the
 * lowest score in the group is dropped. It should use the following functions:
 *
? *	  - void getScore() should ask the user for a test score, store it in a reference parameter
 *		variable, and validate it. This function should be called by main once for each of the
 *		five scores to be entered.
 *    - void calcAverage() should calculate and display the average of the four highest scores.
 *		This function should be called just once by main and should be passed the five scores.
 *    - int findLowest() should find and return the lowest of the five scores passed to it.
 *      It should be called by calcAverage, which uses the function to determine which of the
 *		five scores to drop.
 *
 * Input Validation: Do not accept test scores lower than 0 or higher than 100.
 *
 */

#include <iostream> // to give access to cout and cin
#include <iomanip>
using namespace std;

//function prototypes
void getScore(int&);
void calcAverage(int&, int&, int&, int&, int&);
int findLowest(int&, int&, int&, int&, int&);

int main()
{
	int score1, score2, score3, score4, score5;

	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);
	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}

void getScore(int& testScore)
{
	testScore = -1;
	
	//input validation so score has to be between 0 to 100
	while ((testScore > 100) || (testScore < 0))
	{
		cout << "\nEnter a test score: ";
		cin >> testScore;

		//output message based on whether input score is valid or not
		if ((testScore >= 0) && (testScore <= 100))
		{
			cout << "The score is valid!" << endl;
		}
		else
		{
			cout << "The score is invalid, Please enter a valid test score!" << endl;
		}
	}
}

void calcAverage(int& testScore1, int& testScore2, int& testScore3, int& testScore4, int& testScore5)
{
	double num = 0.0, denom = 0.0, average = 0.0;
	int lowestScore = 0;

	//grabs the sum of all five test scores
	num = testScore1 + testScore2 + testScore3 + testScore4 + testScore5;

	//finds the lowest test score and assigns it to the variable "lowestScore" variable
	lowestScore = findLowest(testScore1, testScore2, testScore3, testScore4, testScore5);

	//subtracts lowest score from the sum of all variables, so only the four highest scores remain
	num -= lowestScore;
	denom = 4;

	//calculate the average
	average = num / denom;
	
	cout << "\nYour lowest test score was a " << lowestScore << ". This score was dropped." << endl;
	cout << "The average of the highest four test scores is " << average << "." << endl;
}

int findLowest(int& testScore1, int& testScore2, int& testScore3, int& testScore4, int& testScore5)
{
	int lowestScore;
	lowestScore = testScore1;

	//cycles through test scores and reassigns the lowest test score if a smaller score is present
	if (testScore2 < lowestScore)
	{
		lowestScore = testScore2;
	}
	if (testScore3 < lowestScore)
	{
		lowestScore = testScore3;
	}
	if (testScore4 < lowestScore)
	{
		lowestScore = testScore4;
	}
	if (testScore5 < lowestScore)
	{
		lowestScore = testScore5;
	}

	return lowestScore;
}
