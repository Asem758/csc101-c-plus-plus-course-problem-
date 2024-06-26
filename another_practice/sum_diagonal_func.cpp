#include <bits/stdc++.h>
using namespace std;

const int MAX = 100
void PrincipalDiagonal(int mat[][MAX], int n)
{
    cout << "Principal Diagonal Number is: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j)
                cout << mat[i][j] << ", ";
        }
    }
    cout << endl;
}

// Function to print the Secondary Diagonal
void printSecondaryDiagonal(int mat[][MAX], int n)
{
    cout << "Secondary Diagonal: ";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Condition for secondary diagonal
            if ((i + j) == (n - 1))
                cout << mat[i][j] << ", ";
        }
    }
    cout << endl;
}

// Driver code
int main()
{
    int n = 4;
    int a[][MAX] = { { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 },
                     { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 } };

    printPrincipalDiagonal(a, n);
    printSecondaryDiagonal(a, n);
    return 0;
}
