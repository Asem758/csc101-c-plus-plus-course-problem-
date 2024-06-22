#include <iostream>
#include <cmath>

using namespace std;

int octalToDecimal (int octalNumber)
{
    int decimalNumber = 0, i = 0; int rem;

    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
    }

    return decimalNumber;
}

int main()
{
    int octalNumber;

    cout <<"Enter an octal Number: ";
    cin >> octalNumber;

    cout << octalNumber << " in octal = " << octalToDecimal (octalNumber) << " in decimal ";

    return 0;
}
