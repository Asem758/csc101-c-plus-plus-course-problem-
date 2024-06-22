#include <iostream>
using namespace std;

int fact (int);

int main()
{
    int n, result;

    cout <<"Enter a positive number: ";
    cin >> n;

    result = fact(n);

    cout <<"Factorial number: " << result <<endl;

    return 0;
}

int fact (int n)
{
    if (n > 1)
    {
        return n * fact (n-1);
    }

    else
    {
        return 1;
    }
}
