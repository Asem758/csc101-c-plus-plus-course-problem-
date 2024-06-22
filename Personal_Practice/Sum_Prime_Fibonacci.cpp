#include <iostream>
using namespace std;

int sumOfPrime(int x)
{
    int a = 0; int sum = 0; int sumOfFibonacci;

    for (int i = 2; i < x; i++)
    {
        bool isPrime = true;

        for (int n = 2; n < i; n++)
        {
            if (i % n == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime == true)
        {
            sum = sum + (a / i);
            a++;
        }
    }

    return 0;
}

int main()
{
    int x = 100;


    cout << sumOfPrime(x) - sumOfFibonacci(x) <<endl;

    return 0;
}
