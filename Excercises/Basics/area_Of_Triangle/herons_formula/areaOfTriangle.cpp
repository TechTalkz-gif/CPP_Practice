/*
Write a program in C++ to find the area of any triangle using Heron's Formula. Go to the editor
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double side_1 {}, side_2 {}, side_3 {}, sidePerimeter {};

    cout << "Find the area of any triangle using Heron's Formula : " << endl;
    cout << "----------------------------------------------------------" << endl;

    cout << "Input the length of 1st side of the triangle : " ;
    cin >> side_1;
    cout << "Input the length of 2nd side of the triangle : " ;
    cin >> side_2;
    cout << "Input the length of 3rd side of the triangle : " ;
    cin >> side_3;

    sidePerimeter = (side_1 + side_2 + side_3) / 2;

    cout << "The area of the triangle is : " <<
        sqrt(sidePerimeter * (sidePerimeter-side_1) * (sidePerimeter-side_2) * (sidePerimeter-side_3)) <<
        endl;

    return 0;
}
