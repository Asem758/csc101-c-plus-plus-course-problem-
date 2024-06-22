#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2, matx1[10][10], matx2[10][10], sum = 0;

    cout << "Enter Row and Column size of first matrix: ";
    cin >> row1 >> col1;

    cout <<endl;

    cout << "Enter Row and Column size of Second matrix: ";
    cin >> row2 >> col2;

    if (row1 == row2 && col1 == col2)
    {
        cout << "\nEnter " << row1 << "*" << col1 << " First Matrix Element: ";

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)

                cin >> matx1[i][j];

        }

        cout << "\nEnter " << row1 << "*" << col1 << " Second Matrix Element: ";

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)

                cin >> matx2[i][j];

        }

        cout << "\nAddition Result of two given matrix: \n";

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                sum = matx1[i][j] + matx2[i][j];

                cout << sum << "  ";
            }

            cout <<endl;
        }
    }

    else
    {
        cout << "\nSize of Mismatched !\n";
    }

    return 0;
}
