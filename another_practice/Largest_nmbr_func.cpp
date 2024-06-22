#include <iostream>
using namespace std;

int find_larg (int a[], int s)
{
    int i, m;
    m = a[0];

    for (i = 1; i < s; i++)
    {
        if (m < a[i])
        {
            m = a[i];
        }
    }

    return m;
}

int main()
{
    int arr[100], tot, larg,i;

    cout << "Enter the size (max. 100): ";
    cin >> tot;

    cout <<endl;

    cout << "Enter " << tot << " Element: ";

    for (i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    larg = find_larg (arr, tot);

    cout << "\nLargest Number: " << larg;

    cout <<endl;

    return 0;
}
