#include <iostream>
using namespace std;

int main()
{
    int A[5] = {7,8,4,5,6}, B[5] = {};

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
