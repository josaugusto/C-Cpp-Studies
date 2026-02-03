#include <iostream>
#include <iomanip>

/*
	1. Gallons to Liters
		Write a program that calculates the price of gasoline. The program should ask the user
		to input the volume of gasoline in liters. It should then display the volume in gallons
		and the corresponding price. Assume that the price of gasoline is $3.58 per gallon.

		Note that 1 gallon = 4.546 liters.
*/

using namespace std;

int main()
{

	constexpr double pricePerGallon{ 3.58 };
	constexpr double litersPerGallon{ 4.546 };

	double liters{};

	cout << "What the volume of gasoline in liters? ";
	cin >> liters;

	double gallons{ liters / litersPerGallon };
	double totalPrice{ gallons * pricePerGallon };

	cout << fixed << showpoint << setprecision(2);
	cout << gallons << " gallons\n";
	cout << "Total price: $" << totalPrice << '\n';


	return 0;
}

// Completed