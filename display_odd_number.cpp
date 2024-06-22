#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Enter the first integer number: ";
  cin >> x;

  int y;
  cout <<"Enter the second integer number: ";
  cin >> y;

  for (int i = x; i <= x; i++)
  {
      for (int i = x; i <= y; i++)
      {
          if (i % 2 != 0)
          {
              cout << i <<",";
          }

      }

  }

  return 0;

}
