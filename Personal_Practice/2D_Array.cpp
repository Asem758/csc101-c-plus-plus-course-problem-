#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void func (int twoDArray[] [5], int row, int col)
{
    for (int i = 0; i < row; i++)

        for (int j = 0; j < col; j++)

        twoDArray [i] [j] = twoDArray [i] [j] * twoDArray [i] [j];
}

int main()
{
    int twoDArray [2] [5] = {
                               {1,2,3,4,5},

                               {2,4,6,8,10}
                            };
  func (twoDArray, 2,5);

  for (int i = 0; i < 2; i++)
  {
      for (int j = 0; j < 5; j++)
      {
          cout << twoDArray [i][j] <<" ";
      }

      cout <<endl;
  }

  return 0;


}
