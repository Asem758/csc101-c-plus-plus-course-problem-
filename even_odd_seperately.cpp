#include <iostream>
using namespace std;
int main() {

  int i = 100;
  while (i >= 90)
  {
      if ( i%2 == 0 )
        cout << i << " ";
        i--;
  }
  cout <<endl;
  i = 100;
  while (i >= 90)
  {
      if (i%2 != 0)
        cout << i << " ";
        i--;
  }
  return 0;

}
