#include <iostream>
using namespace std;

int power_by_recursion(int b, int p)
{
    if (p != 0)
    {
        return b *(b, p-1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int base, power, result;

    cout << "Input Base Number: ";
    cin >> base;

    cout << "Input Power Number: ";
    cin >> power;

    result = power_by_recursion (base,power);

    cout << base << "^" << power " = " << result <<endl;

    return 0;

}


