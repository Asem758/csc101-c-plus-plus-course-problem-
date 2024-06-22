#include <iostream>
using namespace std;
int main() {

  int x,y;
  cout <<"Enter the two number: ";
  cin >> x >> y;

  for (int i = x; i <= x; i++)
  {
      for (int i = x; i <= y; i++)
      {
          if (i % 7 == 0)
          {
              cout << i <<",";
          }


      }

  }

  return 0;

}
