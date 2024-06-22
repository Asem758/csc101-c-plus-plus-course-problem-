#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Enter the number: ";
  cin >> x;

  if (x >= 35 && x <= 75)
  {
      if (x%5 == 0 && x%2 != 0)
      {
          cout << " Yes " <<endl;
      }
      else
      {
          cout << " No " <<endl;
      }
  }

  return 0;
}
