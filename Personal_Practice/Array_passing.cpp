#include <iostream>
#include <cstdlib>

using namespace std;

void question11 (int numArray28[], int numofelement)
{
    for (int i = 0; i < numofelement; i++)
    {
        numArray28[i] = numArray28[i] * numArray28[i];
    }

    cout <<"Printed Array in question11 function: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numArray28[i] <<" ";
    }

    cout <<endl;
}

void var (int x)
{
    x = x + 5;
    cout <<"Value of z is: " << x <<endl;
}

int main()
{
    int numArray[5] = {9,10,19,22,23};
    int x = 10;
    var (x);

    cout <<"The value of X is: " << x <<endl;

    question11 (numArray, 5);

    cout <<"Printed Array in main function: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numArray[i] <<" ";
    }

    return 0;
}
