#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double radius {};
    const double pi {3.1415};

    cout << "Please enter the radius of the sphere : ";
    cin >> radius;

    // Volume of Sphere : 4/3 * pi * r ^ 3
    cout << "Volume of the Sphere is : " << (4 * pi * pow(radius, 3))/3 << endl;

    return 0;
}
