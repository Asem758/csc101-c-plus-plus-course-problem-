#include <iostream>
using namespace std;

int main()
{
    int first, last, temp, numOfdigit, pow, result = 0, rem, num, i;

    cout << "Enter the interval: ";
    cin >> first >> last;

    cout << "\nArmstrong Number (s) Between " << first << " and " << last <<endl;

    while (first <= last)
    {
        temp = first;
        numOfdigit = 0;

        while (temp > 0)
        {
           temp = temp / 10;
           numOfdigit++;
        }

        num = first;

        while (num > 0)
        {
            rem = num % 10;
            pow = 1;
            i = 0;

            while (i < numOfdigit)
            {
                pow = pow * rem;
                i++;
            }

            result = result + pow;
            num = num / 10;
        }

        if (result == first)
        {
            cout << result <<endl;
        }

        first++;
        result = 0;
    }

    cout <<endl;
    return 0;
}
