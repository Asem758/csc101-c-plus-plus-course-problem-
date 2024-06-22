#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, arrTemp[100], *ptr;

    cout << "Enter the size of Array: ";
    cin >> n;

    cout <<endl;

    cout << "Enter " << n << " Array Elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ptr = &arr[0];

    cout <<endl;

    cout << "\nThe Original Array is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << *ptr << "  ";
        ptr++;
    }

    ptr--;

    for (int i = 0; i < n; i++)
    {
        arrTemp[i] = *ptr;
        ptr--;
    }

    ptr = &arrTemp[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] = *ptr;
        ptr++;
    }

    ptr = &arr[0];

    cout <<endl;

    cout << "\nThe Reverse of Given Array is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << *ptr << "  ";
        ptr++;
    }

    cout <<endl;

    return 0;
}
