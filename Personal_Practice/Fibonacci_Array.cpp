#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;

    int fib[n];

    for (int i = 0; i < n; i++)
    {
        int result = a + b;
        fib[i] = a;

        cout << a <<" ";

        a = b;
        b = result;
    }

    for (int i = 0; i < n; i++)
    {
        cout << fib[i] <<" ";
    }

    return 0;
}
