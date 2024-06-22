#include <iostream>

using namespace std;

void squareArray(int myarray[][5], int row, int col ){
    for(int i =0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            cout<<myarray[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row=2; int col = 5;
    int numberArray[2][5] = {
                            {2,4,6,8,10},
                            {1,3,5,7,9},
                            };
    squareArray(numberArray,row, col);
    return 0;}
