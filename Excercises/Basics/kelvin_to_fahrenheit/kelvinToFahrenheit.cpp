#include <iostream>

using namespace std;

int main()
{
    double kelvinTemp {};

    cout << "Convert temperature in Kelvin to Fahrenheit" << endl;
    cout << "-------------------------------------------" << endl;

    cout << "Input the temperature in Kelvin : ";
    cin >> kelvinTemp;

    cout << kelvinTemp << " Kelvin is " << ((kelvinTemp - 273.15)*9)/5 + 32 << " Fahrenheit" << endl;

    return 0;
}
