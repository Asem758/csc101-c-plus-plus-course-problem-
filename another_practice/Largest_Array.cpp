#include <iostream>
using namespace std;

int main()
{
    int arr[100], tot, larg;

    cout << "Enter the size (max. 100): ";
    cin >> tot;

    cout << endl;

    cout << "Enter " << tot << " Elements: ";

    for (int i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    larg = arr[0];

    for (int i = 1; i < tot; i++)
    {
        if (arr[i] > larg)
        {
            larg = arr[i];
        }
    }

    cout << "\nLargest Number = " << larg;

    cout << endl;

    return 0;
}
