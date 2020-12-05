/*
Write a program in C++ to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50
*/

#include <iostream>

using namespace std;

int main()
{
    double length{}, width{};

     cout <<"Find the Area and Perimeter of a Rectangle :" << endl;
     cout << "-------------------------------------------------" << endl;

     cout << "Input the length of the rectangle : " ;
     cin >> length;
     cout << "Input the width of the rectangle : ";
     cin >> width;

     cout << "The area of the rectangle is : " << length * width << endl;
     cout << "The Perimeter of the rectangle is : " << 2 * (length + width) << endl;

     return 0;
}
