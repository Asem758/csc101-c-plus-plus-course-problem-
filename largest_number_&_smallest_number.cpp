#include <iostream>
using namespace std;
int main() {

  float x,y,z;
  cout << "Please enter the number: ";
  cin >> x >> y >> z;

  if (y > x && x < z)
  {
      cout << " Largest Number: " << y <<endl;
      cout << " Smallest Number: " << x <<endl;
  }
  else if (y > x && x < z)
  {
      cout << " Largest Number: " << y <<endl;
      cout << " Smallest Number: " << x <<endl;
  }
  else if (x >= y && y <= z)
  {
      cout << " Largest Number: " << x <<endl;
      cout << " Smallest Number: " << y <<endl;
  }
  else if (x >= y && z < y)
  {
      cout << " Largest Number: " << x <<endl;
      cout << " Smallest Number: " << z <<endl;
  }
  else
  {
      cout << " Otherwise this is wrong number " <<endl;
  }
  return 0;


}
