#include <iostream>
using namespace std;
int main() {

  int x = 19;
  int y = 10;

  int z = x;
  x = y;
  y = z;

  cout <<"X is: " << x <<endl;
  cout <<"Y is: " << y <<endl;

  return 0;

}
