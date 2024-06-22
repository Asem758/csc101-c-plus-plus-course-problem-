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

int main()
{
    int array[7] = {9,5,7,4,3,8,2};
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        int val = checkForPrime(array[i]);
        if (val == 1)
        {
            count = count + 1;
        }
    }

    cout <<"Number of Prime: " << count <<endl;

    return 0;
}
