//Frank Hall III
//January 21, 2023 ©
//Project: Chapter 4 Additional Program
//Description:
/* Write a program to satisfy the requirements in Starting Out with C++ 
*	Chapter 4 #12 Programming Challenge : Software Sales at the end of the
*	Chapter. (page 224) Additional instructions are below.
*
*	A software company sells a package that retails for $99. Quantity discounts
*	are given according to the following table :
*
*	Quantity Discount
*	10 - 19	20 %
*	20 - 49	30 %
*	50 - 99	40 %
*	100 or more 50 %
* 
*	Write a program that asks for the number of units soldand computes the
*	total cost of the purchase.You must use Input Validation.Make sure the number
*	of units is greater than 0. Make sure your output is formatted as US currency.
*	Display the total.Additional requirement to the text book, display the discount
*	percentageand the discount amount in addition to the total purchase cost.*/

#include <iostream> // to give access to cout and cin
#include <iomanip>
using namespace std;

int main()
{
	cout << "\n\nA software company sells a package that retails for $99. " << endl;
	cout << "Quantity discounts are given according to the following table : \n" << endl;
	cout << "\t ===================== " << endl;
	cout << "\t| Quantity | Discount |" << endl;
	cout << "\t|=====================|" << endl;
	cout << "\t|   10-19  |   20 %   |" << endl;
	cout << "\t|=====================|" << endl;
	cout << "\t|   20-49  |   30 %   |" << endl;
	cout << "\t|=====================|" << endl;
	cout << "\t|   50-99  |   40 %   |" << endl;
	cout << "\t|=====================|" << endl;
	cout << "\t|    100+  |   50 %   |" << endl;
	cout << "\t ===================== " << endl;
	cout << "\nHow many units were sold? ";

	double price = 99.0;
	int unitsSold = 0;
	double totalCost = 0.0;

	cin >> unitsSold;
	if (unitsSold > 0)
	{
		if (unitsSold >= 100)
		{
			//cout << "\n100+\n" << endl;
			totalCost = unitsSold * price;
			totalCost -= (unitsSold * price * .5);
		}
		else if (unitsSold >= 50 && unitsSold <= 99)
		{
			//cout << "\n50-99\n" << endl;
			totalCost = unitsSold * price - (unitsSold * price * .4);
		}
		else if (unitsSold >= 20 && unitsSold <= 49)
		{
			//cout << "\n20-49\n" << endl;
			totalCost = unitsSold * price - (unitsSold * price * .3);
		}
		else if (unitsSold >= 10 && unitsSold <= 19)
		{
			//cout << "\n10-19\n" << endl;
			totalCost = unitsSold * price - (unitsSold * price * .2);
		}
		else
		{
			//cout << "\n<10\n" << endl;
			totalCost = unitsSold * price;
		}

		cout << "\n\nThe total cost for selling " << unitsSold << " unit(s) is $" << setprecision(2) << fixed << totalCost << "." << endl;
	}
	else
	{
		cout << "\n\nInput invalid! You must input a number greater than \'0\'" << endl;
	}
}
