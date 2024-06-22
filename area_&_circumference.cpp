#include <iostream>
using namespace std;
int main() {

  float r,a,c;
  cout <<"Enter the value of radius: ";
  cin >> r;

  a = 3.1416*r*r;
  c = 2*3.1416*r;

  cout <<"Area: " << a <<endl;
  cout <<"Circumference: " << c <<endl;
  return 0;

}
