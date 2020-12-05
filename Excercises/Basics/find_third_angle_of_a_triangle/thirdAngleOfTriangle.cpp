/*
Write a program in C++ to find the third angle of a triangle. Go to the editor
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90
*/

#include <iostream>

using namespace std;

int main()
{
    double firstAngle {}, secondAngle {};

    cout << "Find the third angle of a triangle : " << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Input the 1st angle of the triangle : ";
    cin >> firstAngle;
    cout << "Input the 2nd angle of the triangle : ";
    cin >> secondAngle;

    cout << "The 3rd angle of the Triangle is : " << 180 - firstAngle - secondAngle << endl;

    return 0;
}
