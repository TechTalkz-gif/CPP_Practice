/*
Write a program in C++ to convert temperature in Celsius to Fahrenheit.
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95
*/

#include <iostream>

using namespace std;

int main()
{
    double celcius {};

    cout << "Convert temperature in Celsius to Fahrenheit : " << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "Input the temperature in Celsius : ";
    cin >> celcius;

    cout << "The temperature in Celsius : " << celcius << endl;
    cout << "The temperature in Fahrenheit : " << (celcius * 9)/5 + 32 << endl;

    return 0;
}
