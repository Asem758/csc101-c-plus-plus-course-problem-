#include <iostream>
using namespace std;
int main() {

  int l,w,a,p;
  cout <<"Enter the value of length: ";
  cin >> l;
  cout <<"Enter the value of width: ";
  cin >> w;

  a = l * w;
  p = 2 * (l + w);

  cout <<"Area: " << a <<endl;
  cout <<"Perimeter: " << p <<endl;

  return 0;


}
