#include <iostream>
using namespace std;

void question11 (int numberArray1[], int numOfelement)
{
    for (int i = 0; i < numOfelement; i++)
    {
        numberArray1[i] = numberArray1[i] * numberArray1[i];
    }

    cout <<"Printed Array in question11 function: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numberArray1[i] <<" ";
    }

    cout << endl;
}

void var (int x)
{
    x = x + 5;
    cout <<"The value of Z is: " << x <<endl;
}

int main()
{
    int numArray[5] = {6,8,5,9,4};
    int x = 10;
    var(x);

    cout <<"Value of X is: " << x <<endl;

    question11 (numArray, 5);
    {
        cout <<"Printed Array in main function: " <<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << numArray[i] <<" ";
    }

    return 0;
}


