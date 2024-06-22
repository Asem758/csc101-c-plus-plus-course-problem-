#include <iostream>
using namespace std;
int main() {

  int n,a = 0;
  cout <<"Enter the number: ";
  cin >> n;

  while (n > 0)
  {
      n = n / 10;
      a++;
  }

  cout <<"Number of digits in given number is: " << a <<endl;

  return 0;

}
