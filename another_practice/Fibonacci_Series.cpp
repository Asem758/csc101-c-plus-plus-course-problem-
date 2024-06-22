#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, limit, temp, i;

    cout << "Enter the limit: ";
    cin >> limit;

    cout << "\nFibonacci Series Up to " << limit << ": \n";

    for (i = 1; i <= limit; i++)
    {
        if (i == 1)
            c = 0;
        else if (i == 2 || i ==3)
            c = 1;

        else
        {
            temp = a;
            a = b;
            b = c;
            c = a + b;
        }

        if (c > limit)
            break;
        cout << c << "  ";
    }

    cout <<endl;
    return 0;

}
