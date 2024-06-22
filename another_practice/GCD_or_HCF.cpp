#include <iostream>
using namespace std;
int main() {

  int x,y,Hcf,Lcm,a,b,t;
  cout <<"Enter the two integer number: ";
  cin >> x >> y;

  a = x;
  b = y;

  while (b != 0)
  {
      t = b;
      b = a % b;
      a = t;
  }
  Hcf = a;
  Lcm = (x * y) / Hcf;

  cout <<"HCF is: " << Hcf <<endl;
  cout <<"LCM is: " << Lcm <<endl;

  return 0;


}
