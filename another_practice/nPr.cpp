#include <iostream>
using namespace std;

int main()
{
    int long fact = 1, numerator, denominator;
    int perm, n, r, i = 1, sub;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    while (i <= n)
    {
        fact = i * fact;
        i++;
    }

    numerator = fact;
    sub = n - r;
    fact = 1;
    i = 1;

    while (i <= sub)
    {
        fact = i * fact;
        i++;
    }

    denominator = fact;
    perm = numerator / denominator;

    cout << "\nPermutation (nPr) = " << perm;
    cout <<endl;

    return 0;
}
