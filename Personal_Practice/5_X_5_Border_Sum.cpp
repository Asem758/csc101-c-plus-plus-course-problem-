#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int A[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            A[i][j] = rand() % 10;
        }
    }

    cout <<"The 2D Array: \n\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << A[i][j] <<" ";
        }

        cout <<endl;
    }

    cout <<endl<<endl<<"Border Value Sum: \n";

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
            {
                cout << A[i][j] <<"+";
                sum+= A[i][j];
            }
        }
    }

    cout <<"\b \b = " << sum;

    return 0;
}
