#include <iostream>
using namespace std;
int main() {

  int x,y;
  cout <<"Enter two number: ";
  cin >> x >> y;

  if ( x != y)
  {
      if (x > y)

          cout << (x -= y) <<endl;

      else

          cout << (y -= x) <<endl;

  }
  cout <<"HCF = " << x <<endl;

  return 0;

}
