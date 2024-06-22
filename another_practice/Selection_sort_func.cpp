#include <iostream>
using namespace std;

void selSort (int arr[], int tot)
{
    int temp, small, chk, index;

    for (int i = 0; i < (tot - 1); i++)
    {
        chk = 0;
        small = arr[i];

        for (int j = (i + 1); j < tot; j++)
        {
            if (small > arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }

        if (chk != 0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
}

int main()
{
    int tot, arr[50];

    cout << "Enter size of Array: ";
    cin >> tot;

    cout <<endl;

    cout << "Enter " << tot << " Elements : ";

    for (int i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    selSort (arr, tot);

    cout << "\nSorted element of an array: \n";

    for (int i = 0; i < tot; i++)

    cout << arr[i] << "  ";


    cout <<endl;

    return 0;
}
