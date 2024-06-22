#include <iostream>
using namespace std;
int main() {

  float sum = 0;
  float x;
  cout <<"Enter tree number: ";
  cin >> x;
  for (int i = 0; i < x; ++i)
  {

      sum = sum + i;
  }

  cout <<"Sum is: " << sum <<endl;
  cout <<"Average is: " << (sum*1.0)/x <<endl;

  return 0;
}
