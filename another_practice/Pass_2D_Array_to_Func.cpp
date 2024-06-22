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
    int numberOfArray[2][5] = {
                                 {3,5,7,8,6},
                                 {7,10,9,11,2}

                              };

   squareArray (numberOfArray, row, col);

   return 0;
}
