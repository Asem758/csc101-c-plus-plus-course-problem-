#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j, arr[10][10];

    cout << "Enter the row and column size of array: ";
    cin >> row >> col;

    cout << "Enter " << row * col << " Array elements: ";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)

           cin >> arr[i][j];

    }

    cout << "\nThe Array is: \n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)

            cout << arr[i[j] << "  ";

            cout <<endl;
    }

    cout << "\nThe Array elements with it index: \n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)

            cout << "arr[" << i << "] [" << j << "] = " << arr[i][j] << "  ";

            cout <<endl;
    }

    return 0;
}
