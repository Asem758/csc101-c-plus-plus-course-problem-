#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int A[4][3], B[4][3], C[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"Enter a value of position " << i << j <<" of Matrix A: ";
            cin >> A[i][j];
        }
    }

    cout <<endl <<endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"Enter a value of position " << i << j <<" of Matrix B: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = B[i][j] - A[i][j];
        }
    }

    cout<<endl<<endl <<"Matrices A = \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] <<" ";
        }
    }

    cout<<endl<<endl <<"Matrix B = \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] <<" ";
        }
    }

    cout<<endl<<endl <<"Matrix C = \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] <<" ";
        }

        cout <<endl;
    }


}
