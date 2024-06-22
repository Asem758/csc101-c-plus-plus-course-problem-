#include <iostream>
using namespace std;

int main ()
{
    float a,  b, h, r;

    cout << "Enter the number: ";
    cin >> b >> h;

    a = 0.5 * b * h;
    cout << "Area of Triangle: " << a <<endl;

    a = b * h;
    cout << "Area of Rectangle: " << a <<endl;

    a = 3.14 * r * r;
    cout << "Area of Circle: " << a << endl;

    a = 2 * 3.14 * r;
    cout << "Circumference : " << a <<endl;

    return 0;
}
