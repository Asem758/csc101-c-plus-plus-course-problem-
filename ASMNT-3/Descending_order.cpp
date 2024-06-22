
#include<iostream>
#include<stdio.h>

using namespace std;

void Sort (int a[], int n)
           {
             int i, k, max, temp; for (i = 0; i < n - 1; i++)
           {

           max = i;

           for (k = i + 1; k < n; k++)

           if (a[k] > a[max])
           max = k; temp = a[i]; a[i] = a[max]; a[max] = temp;}
           }

           int main ()
           {
           int a[] =
           {
             2, 9, 5, 7, 1, 8, 4, 0
           };

           int n = sizeof (a) / sizeof (a[0]);
           int i;

           cout << "Array is:" << endl;

           for (i = 0; i < n; i++)

           cout << a[i] << "   ";
           cout << endl;

           Sort (a, n);
           cout << "\nSorted array is: \n";

           for (i = 0; i < n; i++) cout << a[i] << "   ";
           return 0;

           }
