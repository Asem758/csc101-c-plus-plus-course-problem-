#include <iostream>;
using namespace std;
int main() {

  int x;
  cout <<"Enter the row number: ";
  cin >> x;

  for (int i = 1; i <= x; i++)
  {
        for (int j = 1; j <= i; j++)
        {
           cout << j;
        }

  cout <<endl;
  }
  cout <<endl;
  for (int k = 1; k <= x; k++)
  {
      for (int l = 1; l <= k; l++)
      {
          cout << k <<" ";
      }
      cout <<endl;
  }
  cout <<endl;
  for (int m = 1; m <= x; m++)
  {
      for (int n = 1; n <= m; n++)
      {
          cout << n <<" ";
      }
      cout <<endl;
  }
  cout <<endl;
  for (int s = 1; s <= x; s++)
  {
      for (int t = 1; t <= s; t++)
      {

          cout <<"*"<<" ";
      }
      cout <<endl;
  }

  return 0;

}

