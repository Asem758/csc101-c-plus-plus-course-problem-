#include <iostream>
using namespace std;
int main() {

  int n;
  int sum = 0;

  cout <<"Enter a number: ";
  cin >> n;

  while (n >= 0)
  {
      sum+= n;

      cout <<"Enter a number: ";
      cin >> n;
  }

  cout <<"The sum is: " << sum <<endl;

  return 0;

}
