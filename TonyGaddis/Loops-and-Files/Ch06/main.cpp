#include <iostream>

using namespace std;

/*

    6. Distance Traveled
        The distance a vehicle travels can be calculated as follows:
        distance = speed * time
        For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
        120 miles.
        Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
        many hours it has traveled. The program should then use a loop to display the distance the
        vehicle has traveled for each hour of that time period. Here is an example of the output:

        What is the speed of the vehicle in mph? 40
        How many hours has it traveled? 3

        Hour     Distance Traveled
        --------------------------------
        1            40
        2            80
        3            120
 */

int main() {

    int speedVehicle{}, hoursTraveled{};

    cout << "What is the speed of the vehicle in mph?";
    cin >> speedVehicle;

    cout << "How many hours has it traveled?";
    cin >> hoursTraveled;

    cout << "Hour\tDistance Traveled\n";
    cout << "--------------------------------\n";


    for (int hour = 1; hour <= hoursTraveled; hour++) {
        int distance =  speedVehicle * hour;
        cout << hour << "\t\t" << distance  << '\n';
    }

    return 0;
}

// Completed