/*
 Write a program in C++ to convert temperature in Fahrenheit to Celsius.
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35
*/

#include <iostream>

using namespace std;

int main()
{
    double fahrenheit {};

    cout << "Convert temperature in Fahrenheit to Celsius : " << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "Input the temperature in Fahrenheit : ";
    cin >> fahrenheit;

    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    cout << "The temperature in Celsius : " << (fahrenheit - 32) * (5.0/9.0) << endl;

    return 0;
}
