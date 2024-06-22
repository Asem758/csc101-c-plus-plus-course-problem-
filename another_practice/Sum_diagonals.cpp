#include <iostream>
using namespace std;


void PrincipalDiagonal(int arr[5][5], int n1)
{

    int sum_p = 0;
    cout << "Principal Diagonal Number is: ";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (i == j)
            {
               sum_p+= arr[i][j];
               cout << arr[i][i] << ", ";
            }
        }

    }

    cout << "Principal sum is: " << sum_p <<endl;
    cout << endl;
}

void SecondaryDiagonal(int arr[5][5], int n1)
{
    int sum_s = 0;

    cout << "Secondary Diagonal Number is: ";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if ((i + j) == n1 - 1)
            {
                sum_s+= arr[i][j];
                cout << arr[i][j] << ",";
            }
        }
    }

    cout << "Secondary Sum is: " << sum_s <<endl;
    cout << endl;
}

int main()
{
    int n1;
    cout << "Enter elements of matrix: ";
    cin >> n1;

   int arr[n1][n1];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr[i][j];
        }
    }

    PrincipalDiagonal(arr, n1);
    SecondaryDiagonal(arr, n1);

    return 0;
}
