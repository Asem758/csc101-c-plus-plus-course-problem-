#include <iostream>
using namespace std;

void squareArray (int myarray[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << myarray[i][j] <<" ";
        }

        cout <<endl;
    }
}

int main()
{
    int row = 2; int col = 5;
    int numArray [2][5] = {
                           {5,6,7,8,9},

                           {1,2,3,4,5},
                          };

 squareArray (numArray, row, col);

 return 0;
}
