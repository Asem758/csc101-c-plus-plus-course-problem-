#include <iostream>
using namespace std;

bool checkPrimeNumber (int n)
{
    bool isPrime = true;

    if (n == 0 || n == 1)
    {
        isPrime = false;
    }

    else
    {
        if (int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    return false;
}

int main()
{
    int n;

    cout <<"Enter a positive integer: ";
    cin >> n;

    if (checkPrimeNumber (n))

        cout << n << " is a prime number " <<endl;

    else

        cout << n << " is not a prime number " <<endl;

        return 0;
}
