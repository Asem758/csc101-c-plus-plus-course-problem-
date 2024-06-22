#include <iostream>
using namespace std;

int main()
{
    int numbers[2][3] = {
                           {9,10,19},

                           {22,23,1},

                        };

  for (int i = 0; i < 2; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          cout << numbers[i][j] <<" ";
      }
  }

  return 0;
}
