#include <iostream>
using namespace std;
int main() {

  int x = 2;
  switch (x)
  {
      case 1: cout << "Choice is 1 " <<endl;
      break;
      case 2: cout << "Choice is 2 " <<endl;
      break;
      case 3: cout << "Choice is 3 " <<endl;
      break;

      default: cout << "Choice other than 1, 2 and 3 " <<endl;
  }
  return 0;

}
