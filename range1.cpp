#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Please enter the number: ";
  cin >> x;

  if (x > 10 && x < 40 && x % 5 == 0)
  {
      if (x > 60 && x < 90 && x % 7 == 0)
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
