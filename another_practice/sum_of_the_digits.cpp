#include <iostream>
using namespace std;
int main() {

  int n;
  cout <<"Enter the 3 digit number: " <<endl;
  cin >> n;

  int first = n/100;
  n = n%100;

  int second = n/10;
  int third = n%10;

  int sum = first + second + third;
  cout <<"Sum is: " << sum <<endl;

  return 0;
}
