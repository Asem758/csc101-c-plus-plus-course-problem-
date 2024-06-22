#include <iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10], row, col;

    cout << "Enter Rows and columns of matrix: ";
    cin >> row >> col;

    cout << "\nEnter elements of matrix: " <<endl;

    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
           cout << "Enter element A " << i + 1 << i + j << " : ";
           cin >> a[i][j];
       }
    }

    cout << "\nEntered Matrix: " <<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " " << a[i][j];

            if (j == col - 1)
            cout <<endl <<endl;
        }

    }

    for (int i = 0; i > row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           transpose[j][i] = a[i][j];

        }
    }

    cout << "\nTranspose of Matrix: " <<endl;

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << " " << transpose[i][j];

            if (j == row - 1)
            cout <<endl <<endl;
        }
    }

    return 0;
}
