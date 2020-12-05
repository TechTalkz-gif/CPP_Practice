/* Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const double pi {3.14159};
    double height {}, radius {};

    cout << "Calculate the volume of a cylinder :\n-----------------------------------------" << endl;
    cout << "Please enter the height of the cylinder and radius of the cylinder separated by space : " ;
    cin >> height >> radius;

    cout << "Thee volume of a cylinder is : " << pi * pow(radius, 2) * height << endl;

    return 0;
}
