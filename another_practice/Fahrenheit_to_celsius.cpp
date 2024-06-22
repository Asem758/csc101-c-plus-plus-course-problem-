#include <iostream>
using namespace std;

int main()
{
    double f,c;

    cout << "Enter the Fahrenheit: ";
    cin >> f;

    c = (f - 32) / 1.8;
    cout << "Value of Celsius: " << c <<endl;

    return 0;

}
