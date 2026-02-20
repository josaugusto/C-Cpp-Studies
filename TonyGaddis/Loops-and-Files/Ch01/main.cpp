#include <iostream>

using namespace std;

/*
    1. Sum of Numbers
        Write a program that asks the user for a positive integer value. The program should use
        a loop to get the sum of all the integers from 1 up to the number entered. For example,
        if the user enters 50, the loop will find the sum of 1, 2, 3, 4, . . ., 50.

        Input Validation: Do not accept a negative starting number.
*/

int main()
{
    int num{}, sum{};

    cout << "Enter with a positive integer number: ";
    cin >> num;

    while (num < 0)
    {
        cout << "Invalid number. Enter a positive integer: ";
        cin >> num;
    }

    for (int i = 1; i <= num; i++)
        sum+=i;

    cout << "Sum Total: " << sum << '\n';
        
    return 0;
}

// Completed