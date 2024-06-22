#include <iostream>
using namespace std;
int main() {

  int x,fact = 1;
  cout <<"Enter the factorial number: ";
  cin >> x;

  while (x)
  {
      fact = fact * x;
      x = x - 1;
  }

  cout << fact <<endl;

  return 0;

}
