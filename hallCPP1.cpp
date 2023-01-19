//Frank Hall III
//January 18, 2023 �
//Project: Chapter 3 Program
//Description: This program prompts a series of question to get input from the user

#include <iostream> // to give access to cout and cin
#include <iomanip>
using namespace std;

int main()
{

	int population, students;
	float income, wage, GNP;
	char gender;

	cout << "[DO NOT TYPE IN COMMAS FOR VALUES AS IN 123,123.00...it is typed as 123123.00]\n" << endl;

	cout << "What is the current population of the US?" << endl;
	cin >> population;

	cout << "\nWhat is the average income in the US?" << endl;
	cin >> income;

	cout << "\nWhat is the hourly wage of a family member?" << endl;
	cin >> wage;

	cout << "\nHow many students are currently attending SPC?" << endl;
	cin >> students;

	cout << "\nWhat is the total GNP of Florida?" << endl;
	cin >> GNP;

	cout << "\nEnter a single character to reperesent your gender: " << endl;
	cin >> gender;


	cout << "\nA total of " << population << " people, currently reside in the US." << endl;
	cout << "The average income in the US is $" << setprecision(2) << fixed << income << "." << endl;
	cout << "Your chosen family member makes $" << setprecision(2) << fixed << wage << " per hour." << endl;
	cout << "There are " << students << " students attending SPC." << endl;
	cout << "The total GNP in florida is " << setprecision(2) << fixed << GNP << endl;
	cout << "\'" << gender << "\' is the character that represents your gender." << endl;

	//Five beeps at the end of the program
	cout << '\a';
	cout << '\a';
	cout << '\a';
	cout << '\a';
	cout << '\a';

	return 0;
}
