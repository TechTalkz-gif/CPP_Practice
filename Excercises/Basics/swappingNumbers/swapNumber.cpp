#include <iostream>

using namespace std;

int main()
{
    // Without third variable
    double Number_1 {}, Number_2 {};
    cout << "Enter the numbers separated by space : ";
    cin >> Number_1 >> Number_2;
    cout << "Numbers before swapping :: Number_1 - " << Number_1 << "   Number_2 - " << Number_2 << endl;

    Number_1 += Number_2;
    Number_2 = Number_1 - Number_2;
    Number_1 = Number_1 - Number_2;

    cout << "Numbers after swapping without third variable :: Number_1 - " << Number_1 << "   Number_2 - " << Number_2 << endl;

    // Swapping with third variable
    double Number_3 {};
    Number_3 = Number_1;
    Number_1 = Number_2;
    Number_2 = Number_3;

    cout << "Numbers after swapping with third variable :: Number_1 - " << Number_1 << "   Number_2 - " << Number_2 << endl;

    return 0;
}
