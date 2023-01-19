//Frank Hall III
//January 18, 2023 ©
//Project: Chapter 5 Program
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
* cnt1 and cnt2 should be used for the loop control variables.
* ================================ The above was done in Chapter 4 Program (hallCPP12) ===============================
* 8.  Create a for loop to print the numbers 1 thru 5, all on the same line.
* 9.  On the next output line create a for loop which will count backwards by 1’s from 100 to 0 (inclusive of 100 and 0) 
*     only displaying every number which is evenly divisible by 17.
* 10. Write a while loop to do the same as #9 above.
* 11. Write a do…while loop to:
*	a.  ask the user for a number   ( use the variable Guess).
*	b.   get user input.
*	c.   tell the user the remainder of dividing the number by 5 (modulo) even if result is 0.
*	d.   continue the loop until the user enters zero (0) as the number. (Make sure the user is aware of this.)
* 
* Organize the loop like this (this is a planning technique called pseudocode):
*           do
*            {
*               prompt the user for a # (a. above)
*                get user input (b. above)
*                output to user (c. above)
*            }while   (your test goes here to see if the number is 0);
* 
* 12. Create a for loop within a for loop.  The outer loop will count from 1 to 5. The inner loop will count from
*      1 to 6 and write the product of the outer loop counter multiplied by the inner loop counter, all on the same 
*	  line with one tab (‘\t’) between. Between the loop ends put a line feed (endl or \n). The result should look 
*	  like this:
*		1          2          3          4          5          6
*		2          4          6          8          10         12
*		3          6          9          12         15         18         etc,
*/

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

	cout << "\nGuess: " << Guess << endl;;
	cout << "Die Roll: " << DieRoll << endl;;

	if (Guess == DieRoll)
	{
		cout << "WINNER\n" << endl;
	}
	if (DieRoll % 2)
	{
		cout << "DOUBLE WINNER\n" << endl;
	}
	if (((DieRoll + Guess) >= 10) && (DieRoll % 2 == 0))
	{
		cout << "YOU ARE A LUCKY PERSON\n" << endl;
	}

	// Question 8
	for (int cnt1 = 1; cnt1 <= 5; cnt1++)
	{
		cout << setw(2) << cnt1 << "   ";

	}
	cout << "\n\n";
	
	// Question 9
	for (int cnt2 = 100; cnt2 > 0; cnt2--) 
	{
		if (cnt2 % 17 == 0)
		{
			cout << cnt2 << "   ";
		}
	}
	cout << "\n\n";
	
	// Question 10
	cnt1 = 0;
	cnt2 = 100;

	while (cnt2 > 0)
	{
		if (cnt2 % 17 == 0)
		{
			cout << cnt2 << "   ";
		}
		--cnt2;
	}
	cout << "\n";

	// Question 11
	do {
		cout << "\nEnter '0' to end program!\n";
		cout << "Please enter a number: ";
		cin >> Guess;
		if (Guess != 0)
		{
			cout << "The remainder when dividing " << Guess << " by 5 is " << Guess%5 << ".\n";
		}
	} while (Guess != 0);
	cout << "\n";

	// Question 12
	for (cnt1 = 1; cnt1 <= 5; cnt1++)
	{
		for (cnt2 = 1; cnt2 <= 6; cnt2++)
		{
			 cout << cnt1*cnt2 << "\t";
		}
		cout << "\n";
	}
	return 0;
}
