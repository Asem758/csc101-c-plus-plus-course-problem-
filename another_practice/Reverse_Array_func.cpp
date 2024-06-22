#include <iostream>
using namespace std;

void revArray (int a[], int b)
{
    int i, j, temp;

    j = b - 1;

    for (i = 0; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main()
{
    int arr[100], b, i, j, temp;

    cout << "Enter the size of array: ";
    cin >> b;

    cout <<endl;

    cout << "Enter " << b << " Array Element: ";

    for (i = 0; i < b; i++)
    {
        cin >> arr[i];
    }

    revArray (arr, b);

    cout << "\nReverse Array is: ";

    for (i = 0; i < b; i++)
    {
        cout << arr[i] << "  ";
    }

    cout <<endl;

    return 0;
}
