#include <iostream>

using namespace std;

int main()
{
    double height {}, base {};

    cout << "Area of the triangle is : " << endl;
    cout << "-------------------------------------" << endl;

    cout << "Please enter the height of the triangle : ";
    cin >> height;
    cout << "Please enter the base of the triangle : ";
    cin >> base;

    cout << "Area of the Triangle = " << 0.5 * base * height << endl;

    return 0;
}
