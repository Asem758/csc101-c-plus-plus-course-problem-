#include <iostream>
using namespace std;

int main()
{
    int input[100], count, i, num;

    cout <<"Enter Number of elements in Array: ";
    cin >> count;

    cout <<"Enter " << count << " Numbers \n";

    for (int i = 0; i < count; i++)
    {
        cin >> input[i];
    }

    cout <<"Enter a number to search in array: \n";
    cin >> num;

    for (int i = 0; i < count; i++)
    {
        if (input[i] == num)
        {
            cout <<"Element found at index " << i;
            break;
        }
    }

    if (i == count)
    {
        cout <<"Element Not present in input Array \n";
    }

    return 0;
}
