#include <iostream>
using namespace std;
int main() {

  double x,y,z;
  cout <<"please input the number: ";
  cin >> x >> y >>z;

  if ((x*x)+ (y*y)== (z*z) || (x*x)+ (z*z)== (y*y) || (y*y)+(z*z)== (x*x))
  {
      cout<< "Right Triangle"<<endl;
  }
  else
  {
      cout<< "Not a Right Triangle"<<endl;
  }


  return 0;
}
