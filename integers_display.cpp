#include <iostream>
using namespace std;
int main() {

  int x,y,z;
  cout <<"Enter two number: ";
  cin >> x >> y;

  for (int z = x; z <= y; z++)
  {
      if (z % 2 != 0)
        {
          cout << z <<" ";

          if (z < y-1)
          {
              cout <<",";
          }

        }


  }

  return 0;

}
