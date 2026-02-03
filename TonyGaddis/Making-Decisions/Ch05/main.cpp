#include <iostream>
#include <cmath>

/*
	5. Zero Points of a Quadratic Equation

		A quadratic equation (from the Latin quadratus for “square”) is an equation of the form

			ax^2 + bx + c = 0 
		
		where x is the unknown variable, and a, b, and c are coefficients of the equation. 
		The value of the discriminant determines whether a quadratic equation has a real solution or not,
		and how many solutions it can have. When the discriminant is less than zero, the quadratic
		equation has no real solution. When the discriminant equals zero, there is exactly one
		solution; otherwise, there are two solutions. The formula for the discriminant D is

			D = b^2 - 4ac

		Write a program that asks the user to input the coefficients a, b, and c and then displays
		the number of real solutions for the corresponding quadratic equation. It is not required
		to calculate the actual solutions.
*/

using namespace std;

int main()
{
	double a{}, b{}, c{};

	cout << "Coefficient A: ";
	cin >> a;
	cout << "Coefficient B: ";
	cin >> b;
	cout << "Coefficient C: ";
	cin >> c;

	double discriminant{ pow(b, 2) - 4 * a * c};

	if (discriminant < 0)
	{
		cout << "Equation has no real solution\n";
	}
	else if (discriminant == 0)
	{
		cout << "Equation has one solution\n";
	}
	else 
	{
		cout << "Equation has two solutions\n";
	}

	return 0;
}

// Completed