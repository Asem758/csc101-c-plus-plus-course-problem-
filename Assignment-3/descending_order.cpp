#include <iostream>
using namespace std;


int main()
{

    int n, i, j;
    int temp;

    cout <<"Enter the total number of elements to read: ";
    cin >> n;

    int arr[n];


    for (i = 0; i < n; i++)
    {
        cout <<"Enter the element [" <<i + 1 << "] ";
        cin >> arr[i];
    }

    cout <<"Unsorted Array elements: " <<endl;

    for (i = 0; i < n; i++)

        cout << arr[i] << "\t ";

    cout <<endl;


    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ( arr[i] < arr[j] )
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    cout <<"Sorted (Descending Order) Array elements: " <<endl;

    for (i = 0; i < n; i++)

        cout << arr[i] <<"\t ";

    cout <<endl;

    return 0;
}
