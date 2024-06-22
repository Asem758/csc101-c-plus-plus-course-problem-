#include <iostream>
using namespace std;

void CheckPrimeNumber (int num)
{
    int i, sum = 0;

    for (i = 2; i < num; i++)
    {
       if (num % i == 0)
       {
           sum++;
           break;
       }
    }

    if (sum == 0)
    {
        cout << "It is a Prime Number " <<endl;
    }
    else
    {
        cout << "It is not a Prime Number " <<endl;
    }


}

int main()
{
    int num;

    cout << "Enter the Number: ";
    cin >> num;

    cout <<endl;

    CheckPrimeNumber (num);

}
