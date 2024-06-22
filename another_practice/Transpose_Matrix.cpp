#include <iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10], row , col, i, j;

    cout <<"Enter rows and columns of Matrix: ";
    cin >> row >> col;

    cout <<"\nEnter elements of Matrix: " <<endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] <<" ";
        }

        cout <<endl;
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout <<"Enter element a: " << i + 1 << j + 1 <<": ";
            cin >> a[i][j];
        }

    }

   cout <<"\nEntered Matrix: " <<endl;

   for (i = 0; i < row; i++)
   {
       for(j = 0; j < col; j++)
       {
           cout << a[i][j] <<" ";
       }

       cout <<endl;
   }

   for (i = 0; i < row; i++)
   {
       for (j = 0; j < col; j++)
       {
           transpose [i][j] = a[i][j];
       }

   }

   cout <<"\nTranspose Matrix: " <<endl;

   for (i = 0; i < row; i++)
   {
       for (j = 0; j < col; j++)
       {
           cout << transpose[i][j] <<" ";
       }

       cout <<endl;
   }

   return 0;
}
