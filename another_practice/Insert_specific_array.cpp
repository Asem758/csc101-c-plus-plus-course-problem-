#include <iostream>
using namespace std;

int main()
{
    int arr[50], i, elem, pos, n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout <<endl;

    cout << "Enter " << n << " Array Element: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter element to insert: ";
    cin >> elem;

    cout << "At what position ? ";
    cin >> pos;

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[i] = elem;
    n++;

    cout << "\nThe New Array is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout <<endl;

    return 0;
}
