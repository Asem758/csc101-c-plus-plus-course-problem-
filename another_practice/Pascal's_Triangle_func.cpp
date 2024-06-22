#include <iostream>
using namespace std;

long int fact (int n)
{
    int i, f = 1;

    for (i = 0; i <= n; i++)
    {
        f = f * 1;
        return f;
    }
}

int main()
{
    int i, c;

    for (i = 0; i < 5; i++)
    {
       for (c = 4; c < i; c--)

          cout << " ";

       for (c = 0; c <= i; c++)

           cout << fact(i) / (fact(c) * fact(i - c)) << " ";

           cout <<endl;
    }

    cout <<endl;
    return 0;
}
