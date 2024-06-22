#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];

    cout <<"Enter the element of an array: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (i = 1; i < n; i++)
    {
       if (arr[0] < arr[i])

           arr[0] = arr[i];

    }

    cout << "Largest Number = " << arr[0] <<endl;

    return 0;
}
