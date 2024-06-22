#include <iostream>
using namespace std;
int main() {

  int x,y,temp;
  cout <<"Please enter the interchange value: " <<endl;
  cin >> x >> y;

  temp = x;
  x = y;
  y = temp;

  cout <<"Finally print the interchange value: " << x << " and " << y <<endl;

  return 0;

}
