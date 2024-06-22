#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], multy[10][10], r1, c1, r2, c2;

    cout << "Enter Rows and Columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter Rows and Columns for Second matrix: ";
    cin >> r2 >> c2;

    while (c1 != r2)
    {
        cout <<endl;

        cout << "Error! Column of first matrix not equal to row of second. " <<endl;

        cout <<endl;

        cout << "Enter Row and Columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter Row and Column for Second matrix: ";
        cin >> r2 >> c2;
    }

    cout << "\nEnter elements of matrix 1: \n";

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; i < c1; j++)
        {
            cout << "Enter element A " << i + 1 << i + j <<" : ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of matrix 2: \n";

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter element B " << i + 1 << j + 1 <<" : ";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            multy[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                multy[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nOutput Matrix: \n";

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << " " << multy[i][j];

            if (j == c2 - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}
