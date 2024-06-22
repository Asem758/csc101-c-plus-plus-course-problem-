#include <iostream>
using namespace std;

int main()
{
    int x, i, num = 0;

    cout << "Enter the Number: ";
    cin >> x;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            num++;
            break;
        }

    }

    if (num == 0)
    {
        cout << "It is a prime number " <<endl;
    }
    else
    {
        cout << "It is not a prime number " <<endl;
    }

    return 0;
}
