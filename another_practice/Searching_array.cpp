#include <iostream>
using namespace std;

int main()
{
    int arr[10], num, index;

    cout << "Enter 10 elements: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter a number to search: ";
    cin >> num;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }

    cout << "Found at index no. " << index;

    cout <<endl;

    return 0;
}
