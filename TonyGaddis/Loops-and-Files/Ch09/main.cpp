#include <iostream>

using namespace std;

/*
    9. The Collatz Conjecture
        Write a program that lets the user enter a positive integer and then reduces that value
        to 1 by performing the following steps:
            • If the value of n is even, continue with n/2.
            • If n is odd, continue with 3n + 1.

        Display the intermediate steps and finally display the number of steps needed to reach 1.
        Input Validation: Make sure that the number entered is greater than 0.
*/

int main()
{
    int num{};

    cout << "Enter with a positive integer number: ";
    cin >> num;

    while (num <= 0)
    {
        cout << "Invalid number. Enter a positive integer: ";
        cin >> num;
    }

    int steps{};

    while (num != 1)
    {
        if (num % 2 == 0)
        {
            cout << num << " / 2 = " << num / 2 << '\n';
            num/=2;
            steps++;
        } 
        else
        {
            cout << "3 * " << num << " + 1 = " << num * 3 + 1 << '\n';
            num = 3 * num + 1;
            steps++;
        } 
    }
    cout << "the number of steps needed to reach 1 are " << steps << " steps"<< '\n';
    return 0;
}

// Completed