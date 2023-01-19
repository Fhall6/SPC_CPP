//Frank Hall III
//January 18, 2023 ©
//Project: Chapter 4 Program
/*Description:
* 
* Write a program containing the following: Identify the program with your name and class meeting time. 
* Place a comment, properly indented, before each of the 7 points below.   Chapter 5 will add to this program. 
* 1. Variable Definitions only as (DieRoll, Guess, cnt1, cnt2) followed by this statement:
*		- srand((unsigned int)time (NULL));
*		- which will give the random number generator a random starting point.
*		- Note: srand and rand require the TIME.H (or iomanip)
*		- cnt1 and cnt2 will be used in Chapter 5 drop box as counters for loops. Do NOT create additional 
*		  variables. Points will be taken off for any additional variable creation.
* 2. Prompt the user for a whole number between 1 and 6. 
* 3. Accept user input of the number – use Guess as the variable
* 4. Simulate rolling a die with the following code (DieRoll variable is defined in 1):
*		DieRoll = rand()%6+1;    //Note: rand is a function returning 0 thru 32767.
* 5. Display Guess and DieRoll on the Screen with good user labeling information. Additionally, display
*    ”WINNER” if Guess and DieRoll are equal.
* 6. Display “DOUBLE WINNER” if DieRoll is an odd number (use modulo). Not related to question 5 above. 
*    NOT an if else...
* 7. If the DieRoll added to the Guess is greater than or equal to 10 and DieRoll is even Display “YOU 
*    ARE A LUCKY PERSON”. This is unrelated to the previous requirements. NOT an if else...Make this a 
*    complex if test. NOT nested if statements.
* We will add loops when we get to Chapter 5 to this program. */ 

#include <iostream> // to give access to cout and cin
#include <iomanip>
using namespace std;

int main()
{
	int DieRoll, Guess, cnt1, cnt2;
	srand((unsigned int)time(NULL));

	cout << "Please enter a whole number between 1 and 6. " << endl;
	cin >> Guess;
	DieRoll = rand() % 6 + 1;    //Note: rand is a function returning 0 thru 32767.

	cout << "Guess: " << Guess << endl;;
	cout << "Die Roll: " << DieRoll << endl;;

	if (Guess == DieRoll)
	{
		cout << "WINNER" << endl;
	}			
	if (DieRoll % 2)
	{
		cout << "DOUBLE WINNER" << endl;
	}
	if (((DieRoll + Guess) >= 10) && (DieRoll % 2 == 0))
	{
		cout << "YOU ARE A LUCKY PERSON" << endl;
	}
	return 0;
}
