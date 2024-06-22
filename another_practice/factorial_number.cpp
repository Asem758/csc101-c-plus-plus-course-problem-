#include <iostream>
using namespace std;
int main() {

  int n,j;
  cout <<"Enter the number: ";
  cin >> n;

  int fact = 1;
  for (j = 1; j <= n; j++)
  {
      fact = fact * j;
  }

  cout << fact <<endl;

  return 0;
}
