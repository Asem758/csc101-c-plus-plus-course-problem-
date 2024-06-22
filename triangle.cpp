#include <iostream>
using namespace std;
int main() {

  float x,y,z;
  cout <<"Please enter the triangle value: ";
  cin >> x >> y >> z;

  if ((z*z) == (x*x) + (y*y) || (y*y) == (x*x) + (z*z) || (x*x) == (y*y) + (z*z))
  {
      cout << "Right triangle " <<endl;
  }
  else
  {
      cout <<"Not a right triangle " <<endl;
  }
  return 0;

}
