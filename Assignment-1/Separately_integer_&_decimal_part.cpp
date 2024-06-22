#include <iostream>
using namespace std;
int main() {

  int n;
  cout <<"Please enter the odd number: ";
  cin >> n;

  int x = float (n)/2;
  cout <<"Integer part is: " << x <<endl;

  float y = float (n)/2;
  cout <<"Decimal part is: " << (y - x) <<endl;

  return 0;

}
