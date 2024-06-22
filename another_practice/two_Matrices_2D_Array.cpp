#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100] [100], sum[100][100];

    cout <<"Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout <<"Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << "\nEnter elements of first matrix: \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element A " << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of second matrix: \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element B " << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\nSum of two matrix: \n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] <<" ";

            if (j == c - 1)
            {
                cout <<endl;
            }
        }

    }

    return 0;
}
