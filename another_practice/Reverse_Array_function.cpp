#include <iostream>
#include <conio.h>

using namespace std;

void ReverseArray (int arr[], int size)
{
    int temp;
    size--;

    for (int i = 0; size >= i; size--, i++)
    {
        temp = arr[i];
        arr[i] = arr[size];
        arr[size] = temp;
    }
}

int main()
{
    int i, a[10], size;


    cout <<"Enter size of Array (Max: 10)";
    cin >> size;

    cout <<"\nEnter any" << size <<" elements: \n";

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout <<"Sorted data in array: \n\n";

    for (int i = 0; i < size; i++)
    {
        cout <<" " << a[i] <<" ";
    }

    ReverseArray (a, size);
    cout <<"\n\nReverse Array elements are: \n\n";

    for (int i = 0; i < size; i++)
    {
        cout <<" " << a[i] <<" ";
    }

    cout <<"\n";
    getch();
}
