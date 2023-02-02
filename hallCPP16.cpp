// Frank Hall III
// January 24, 2023 ©
// Project: Chapter 9 Program
/* Description:
 *
 * Include the following header files in your program: string, iomanip, iostream
 *
 * Suggestion: code steps 1 thru 4 then test the code by running it then
 * add requirement 5, then test,  then add 6, then test etc.
 *
 * Add comments to display assignment //step 1., //step 2. etc. This program
 * is to have no programmer created functions. Just do everything in main and
 * make sure you comment each step so I can grade more easily. Also, this
 * program will be expanded in Chapter 9 to use pointers.
 *
 * Create a program which has:
 *	1. The following arrays created:
 *      a. an array of double with 5 elements, dArr
 *      b. an array of long, lArr, with 7 elements and initialized at the time
 *		  of creation with the values 100000, 134567, 123456, 9, -234567, -1, 123489
 *	   c. a 2 dimensional array of integer, with 3 rows and 5 columns, iArr.
 *      d. an array of char with your name initialized in it. Big enough for 30
 *         typable characters, sName.
 * 2. define 3 variables, , cnt1 and cnt2 (short data types) as general purpose
 *    counters and a long double total
 * 3. define 1 long variable called highest
 * 4. a for loop to put a random number into each of the elements of the array of
 *    double, dArr. Use rand() and seed a random starting point with srand() as
 *    demonstrated in Chapter .  Use a for loop to display all of the values in dArr.
 * 5. another for loop to add up the array of double, dArr, into the variable total
 * 6. one cout to print the total and another cout to print the average of the
 *    double array, dArr.
 * 7. a for loop similar to the following for the long array, lArr:
 *      for ( cnt1 = 1, highest = lArr[0] ; cnt1 < 7 ; cnt1++ )
 *      {
 *           //logic to compare each array element, starting with lArr[1], with highest
 *           //replace highest if the value in lArr[cnt]  is higher than the value in variable highest
 *      }
 *
 * 8. a cout to print highest as derived in the above code
 * 9. a for loop to put a random number, each with a value no lower than 1 and no higher
 *    than 53, into each element of iArr, the array of integer, seed the random generator
 *    with srand( (unsigned) time(NULL)). Only have to run srand once…. Use the modulo
 *    operator similar to the way you did with dice rolls in Project 2.
 * 10. a separate loop to print iArr with 3 rows on your screen. Each row has 5 numbers.
 *     Use setw to control the width of each column. See Chapter 3 for an example of a
 *     program using setw. Print row by row.
 * 11. a loop to print the 2 dimensional array, iArr, so that all 3 numbers in column 0
 *     are printed and then on the next line all 3 numbers in column 1, etc. thru column 4.
 *     Print column by column.
 * 12. Use cin.getline( ...... ) to type another name into the variable sName. You must use
 *     getline with cin to allow space between first and last name.
 * 13. Print the ascii value of each character in the char array, 1 per line. Use a while
 *     loop and look for the '\0' as a signal to end. Refer to the code in myCourses.
 * 14. make the array of char, sName, have the name "Albert Einstein" in it. You must
 *     use strcpy_s function.
 * 15. print the ascii value of the 12th character of the string sName
 *
 * Extend the Array project to include:
 * 
 * 16. Define a pointer to a double, pdArray.
 * 17. Assign the pointer, pdArray, to contain the address of the double array, dArr:
 * 18. Use the array name, dArr, to print out the array elements with subscript notation, 
 *     [ ]. All on 1 line a space between each.
 * 19. Use the pointer to print out the array elements with pointer notation while not
 *     changing the pointer itself. Use a for loop. *( pdArray + Cnt1) would be an example. 
 *     All on 1 line a space between each.
 * 20. Use the pointer to print out the array elements with pointer notation but change the 
 *     pointer to point to the actual array element rather than the method in 18. All on 1 line.
 *     pdArray would do this if the loop has the following post loop operation:   pdArray++
 * 21. Use the array name for the double array and pointer notation to print the entire array, 
 *     all on one line.
 * 22. Using a different pointer, piArray, allocate enough memory for 100 int's and assign the 
 *     address to the pointer.
 * 23. In a for loop assign every item in the array to be a random number from 1 to 49 
 *     ( hint: rand() % 6 + 1 gives random numbers from 1 to 6 )
 * 24. Using cout print the first 10 items in the array, all on 1 line.
 * 
 */

#include <iostream> // to give access to cout and cin
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	// 1a.)
	double dArr[5];

	// 1b.)
	long lArr[7] = { 100000, 134567, 123456, 9, -234567, -1, 123489 };

	// 1c.)
	int iArr[3][5];

	// 1d.)
	char sName[30] = { "Frank Hall III" };

	// 2.)
	short cnt1, cnt2;
	long double total = 0.0;

	// 3.)
	long highest;
	srand((unsigned int)time(NULL));
	//cout << sizeof(dArr); // returned back 40 -> 5 elements that are 8 bytes long

	// 4.)
	for (cnt1 = 0; cnt1 < sizeof(dArr) / sizeof(double); cnt1++) // https://www.w3schools.com/cpp/cpp_arrays_size.asp - link that helped understand size of 
	{
		dArr[cnt1] = rand();
	}
	cout << "\n[ ";
	for (cnt1 = 0; cnt1 < sizeof(dArr) / sizeof(double); cnt1++)
	{
		cout << dArr[cnt1] << " ";
	}

	// 5.)
	cout << "]\n";
	for (cnt1 = 0; cnt1 < sizeof(dArr) / sizeof(double); cnt1++)
	{
		total += dArr[cnt1];
	}

	// 6.)
	cout << "\nThe sum of the array \"dArr\" is " << total << "." << endl;
	cout << "\nThe average of the \"dArr\" array is " << (total / (sizeof(dArr) / sizeof(double))) << "." << endl;


	// 7.)
	for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++)
	{
		if (lArr[cnt1] > highest)
		{
			highest = lArr[cnt1];
		}
		//logic to compare each array element, starting with lArr[1], with highest
		//replace highest if the value in lArr[cnt]  is higher than the value in variable highest
	}

	// 8.)
	cout << "\n" << highest << " is the highest value in the \"lArr\" array.\n" << endl;

	// 9.)
	for (cnt1 = 0; cnt1 < 3; cnt1++)
	{
		for (cnt2 = 0; cnt2 < 5; cnt2++)
		{
			iArr[cnt1][cnt2] = rand() % 53 + 1;
		}
	}

	// 10.)
	for (cnt1 = 0; cnt1 < 3; cnt1++)
	{
		for (cnt2 = 0; cnt2 < 5; cnt2++)
		{
			cout << iArr[cnt1][cnt2] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";

	// 11.)
	for (cnt2 = 0; cnt2 < 5; cnt2++)
	{
		for (cnt1 = 0; cnt1 < 3; cnt1++)
		{
			cout << iArr[cnt1][cnt2] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";

	// 12.)
	cin.getline(sName, 30);
	cout << endl;

	// 13.)
	cnt1 = 0;
	while (sName[cnt1] != '\0')
	{
		cout << sName[cnt1] << " = " << (int)sName[cnt1] << '\n'; // type-cast char to an int to get the value
		cnt1++;
	}
	cout << "\n";

	// 14.)
	strcpy_s(sName, "Albert Einstein");

	// 15.)
	cout << "'" << sName[11] << "' is the 12th character in the char string \"sName\".\n";

	// 16.)
	int *pdArray;


	return 0;
}
