#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    double a[5], input;
    int count, n;

    count = 0;
    n = 5;

    a[0] = 2;
    a[1] = 5;
    a[2] = 7;
    a[3] = 10;
    a[4] = 9;

    cout << "Sample Input: Input = ";
    cin >> input;

    cout << "Sample Output: Output " <<endl;

    cout << "Array elements: " << "  ";

    for (int i = 0; i < n; i++)
    {
        if (a[i] != input)
        {
            count += 1;
        }

        cout << a[i] << " ";
    }

    cout <<endl;

    cout << input << " is not present in " << count << " Places" <<endl;

    return 0;
}
