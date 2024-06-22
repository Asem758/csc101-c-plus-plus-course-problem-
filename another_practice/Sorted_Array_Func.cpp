#include <iostream>
#include <stdio.h>

using namespace std;

void sort (int a[], int n)
{
   int max, temp;

   for (int i = 0; i < n - 1; i++)
   {
       max = i;
       for (int k = i + 1; k < n; k++)

        if (a[k] > a[i])

        max = k;
       temp = a[i];
       a[i] = a[max];
       a[max] = temp;
   }
}

int main()
{
    int a[] = {2, 9, 5, 7, 1, 8, 4, 0};

    int n = sizeof (a) / sizeof a[0];

    cout << "Array is: " <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }

    cout <<endl;

    sort (a, n);

    cout << "\nSorted Array is: " <<endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }

    return 0;
}
