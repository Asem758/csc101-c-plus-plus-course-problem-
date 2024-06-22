#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Please enter the number: ";
  cin >> x;

  if (x > 50 && x < 100)
  {
      if (x % 13 == 0 || x % 9 == 0)
      {
          cout << " Yes " <<endl;
      }
  }
  else
  {
      cout << " No " <<endl;
  }

  return 0;

}
