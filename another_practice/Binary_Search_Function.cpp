#include <iostream>
using namespace std;

void sortArray (int arr[], int len)
{
    int temp;

    for (int i = 0; i < (len - 1); i++)
    {
        for (int j = 0; j < (len - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearchFunc (int arr[], int num, int len)
{
    int first, last, middle;

    first = 0;
    last = (len - 1);
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (arr[middle] < num)
        {
            first = middle + 1;
        }
        else if (arr[middle] == num)
        {
            return middle + 1;
        }
        else
        {
            last = middle - 1;
        }

        middle = (first + last) / 2;
    }

    return 0;
}

int main()
{
    int len, arr[50], num, pos;

    cout << "Enter the size (Max. 50): ";
    cin >> len;

    cout <<endl;

    cout << "Enter " << len << " Elements: ";

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    sortArray (arr, len);

    cout << "\nThe New Sorted Array is: \n";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "\n\nEnter element to be search: ";
    cin >> num;

    pos = binarySearchFunc (arr, num, len);

    if (pos == 0)
    {
        cout << endl << num << " isn't available in the list ";
    }
    else
    {
        cout << endl << num << " is available at position " << pos;
    }

    cout <<endl;

    return 0;
}
