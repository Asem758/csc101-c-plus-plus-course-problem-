#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int A[4][3], B[3][2], C[4][2];

    cout <<"Enter Matrix A:\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout <<"Enter Matrix B:\n\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;

            for (int k = 0; k < 3; k++)
            {
                sum+= (A[i][k]) * (B[k][j]);
            }

            C[i][j] = sum;
        }
    }

    cout <<"\nA:\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] <<"  ";
        }

        cout <<endl;
    }

    cout <<"\nB:\n\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] <<"  ";
        }

        cout <<endl;
    }

    cout <<"\nC:\n\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] <<"  ";
        }

        cout <<endl;
    }
}


