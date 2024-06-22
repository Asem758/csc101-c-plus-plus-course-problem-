#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter the large number: ";
    cin >> n1 >> n2;

    if (n1 > n2)
    {
        cout << "Large Number is: " << n1 << endl;
    }

    else
    {
        cout << "Small number is: " << n1 << endl;
    }

    return 0;
}

