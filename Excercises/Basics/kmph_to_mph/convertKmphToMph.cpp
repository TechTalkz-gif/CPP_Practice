/*
Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.
*/

#include <iostream>

using namespace std;

int main()
{
    double kmph {};

    cout << "Convert kilometers per hour to miles per hour" << endl;
    cout << "---------------------------------------------" << endl;

    cout << "Input the distance in kilometer per hour : ";
    cin >> kmph;

    cout << "The " << kmph << " Km/hr means " << kmph * 0.621 << " Miles/hr" << endl;

    return 0;
}
