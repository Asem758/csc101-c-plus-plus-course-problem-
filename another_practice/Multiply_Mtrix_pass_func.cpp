#include <iostream>
using namespace std;

void enterData (int Matrix1[][10], int Matrix2[][10], int mult[][10], int row1, int col1, int row2, int col2)
{
    cout << endl << "Enter elements of Matrix 1: " <<endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "Enter elements A " << i + 1 << j + 1 << " : ";
            cin >> Matrix1[i][j];
        }
    }

    cout << endl << "Enter elements of Matrix 2: " <<endl;

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "Enter elements B " << i + 1 << i + j << " : ";
            cin >> Matrix2[i][j];
        }
    }
}

void multiplyMatrices (int Matrix1[][10], int Matrix2[][10], int mult[][10], int row1, int col1, int row2, int col2)
{
    for (int i = 0; i < col1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                mult[i][j] += Matrix1[i][k] * Matrix2[k][j];
            }
        }
    }
}

void display (int mult[][10], int row1, int col2)
{
    cout << "Output Matrix: " <<endl;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << mult[i][j] << " ";

            if (j == col2 - 1)
            cout << endl <<endl;
        }
    }
}

int main()
{
    int Matrix1[10][10], int Matrix2[10][10], int mult[10][10], int row1, int col1, int row2, int col2;

    cout << "Enter rows and column for first Matrix: ";
    cin >> row1 >> col1;

    cout << "Enter rows and column for second Matrix: ";
    cin >> row2 >> col2;

    while (col1 != row2)
    {
        cout << "Error! Column of first matrix not equal to row of second. " <<endl;

        cout << "Enter rows and column of first matrix: ";
        cin >> row1 >> col1;

        cout << "Enter rows and column of second matrix: ";
        cin >> row2 >> col2;

    }

    enterData (Matrix1, Matrix2, row1, col1, row2, col2);

    multiplyMatrices (Matrix1, Matrix2, mult, row1, col1, row2, col2);

    display (mult, row1, col2);

    return 0;
}
