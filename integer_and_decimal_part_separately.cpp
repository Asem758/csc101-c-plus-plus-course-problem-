#include <iostream>
using namespace std;
int main() {

  float x;
  cout <<"please enter the number: ";
  cin >> x;

  x = int(x);
  cout <<"Integer part is: " << x <<endl;

  x = float(x);
  cout <<"Decimal part is: " << x <<endl;

  return 0;

}
