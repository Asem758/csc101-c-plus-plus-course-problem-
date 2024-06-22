#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int A[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j )% 2 == 0)
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j] = 0;
            }
        }
    }

    cout <<endl<<endl<<"Matrix A= \n";

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << A[i][j] <<" ";
        }

        cout <<endl;
    }
}
