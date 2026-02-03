#include <iostream>
#include <iomanip>

/*
	1. Absolute of a Number
		The absolute of a number is its value without the sign. Write a program that asks the user
		to enter a number and finds the absolute of the number using the conditional operator.
*/

using namespace std;

int main()
{
	double number{};

	cout << "Number: ";
	cin >> number;

	double absoluteNumber = (number < 0) ? -number : number;

	cout << fixed << showpoint << setprecision(2);
	cout << "The absolute value of " << number << " is " << absoluteNumber;

	return 0;
}

// Completed