#include <iostream>
using namespace std;

bool checkForPrime (int num)
{
    bool numberIsPrime = true;
    for (int j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            numberIsPrime = false;
        }
        if (numberIsPrime == true)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

int NumberOfPrimes (int array[], int sizeOfArray)
{
    int count = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        int val = checkForPrime(array[i]);

            if (val == 1)
            {
                count = count + 1;
            }
    }

    return count;
}

int main()
{
    int sizeOfArray = 7;
    int myarray[sizeOfArray] = {7,9,4,5,8,2,3};
    int a = numberOfPrimes (myarray,sizeOfArray);

    cout <<"Number of Primes: " << a <<endl;

    return 0;

}
