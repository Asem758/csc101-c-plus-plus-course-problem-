#include <iostream>
using namespace std;
int main() {

  int d,y,m,d1,d2;
  cout <<"Please enter the number of days: ";
  cin >> d;

  y = d / 365;
  d1 = d % 365;
  m = d1 / 30;
  d2 = d1 % 30;

  cout << y << " year " << m << " Month " << d2 << " Days " <<endl;

  return 0;


}

