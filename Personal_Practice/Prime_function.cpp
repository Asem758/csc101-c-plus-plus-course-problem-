#include <iostream>
#include <cmath>

using namespace std;

bool checkforPrime(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }

    return isPrime;
}

int main()
{
    int n = 10;
    if (checkforPrime(n) == true)
    {
        cout << n <<"is Prime " <<endl;
    }
    else
    {
        cout << n <<" is not Prime " <<endl;
    }

    return 0;
}
