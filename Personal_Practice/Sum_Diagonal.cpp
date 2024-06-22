#include <iostream>
#include <cstdlib>

using namespace std;

void sumDiagonals (int numArray[][5], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << numArray[i][j] <<" ";
            if (i == j)
            {
                sum+= numArray[i][j];
            }
        }

        cout <<endl;
    }

    cout <<endl;

    cout <<"Sum of diagonal: " << sum <<endl;
}

int main()
{
    int row = 5;
    int col = 5;

    int ArrayNum[5][5];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ArrayNum[i][j] = rand() % 10;
        }
    }

    sumDiagonals (ArrayNum, 5,5);
}
