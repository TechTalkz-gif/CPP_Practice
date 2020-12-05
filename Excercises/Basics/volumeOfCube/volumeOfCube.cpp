/*
Write a program in C++ to calculate the volume of a cube.
Sample Output:
    Calculate the volume of a cube :
    ---------------------------------------
    Input the side of a cube : 5
    The volume of a cube is : 125
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double cubeDimension {};

    cout << "Please enter the dimension of the cube : ";
    cin >> cubeDimension;

    cout << "Volume of the cube is : " << pow(cubeDimension, 3) << endl;

    return 0;
}
