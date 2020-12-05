/*
Write a program in C++ to find the area and circumference of a circle.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const double pi {3.14159};
    double radius {};

    cout << "Find the area and circumference of any circle :" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "Input the radius(1/2 of diameter) of a circle : " << endl;
    cin >> radius;

    cout << "The area of the circle is : " << pi * pow(radius, 2) << endl;
    cout << "The circumference of the circle is : " << 2 * pi * radius << endl;

    return 0;
}
