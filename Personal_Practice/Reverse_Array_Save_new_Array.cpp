#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1,2,3,4,5}, B[5] = {};

    for (int i = 0; i < 5; i++)
    {
        B[i] = A[4 - i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << B[i] <<" ";
    }

    cout <<endl;

    return 0;
}
