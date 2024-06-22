#include <iostream>
using namespace std;
int main() {

  int x,y,z;
  cout <<"Please enter the number: ";
  cin >> x >> y;

  z = x;
  x = y;
  y = z;

  cout <<"X: " << x <<endl;
  cout <<"Y: " << y <<endl;

  return 0;

}
