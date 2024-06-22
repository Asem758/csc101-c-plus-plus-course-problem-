#include <iostream>
using namespace std;
int main() {

  int n;
  cout <<"Enter the 4 digit number: " <<endl;
  cin >> n;

  int first = n/1000+2;
  n = n%1000;

  int second = n/100+2;
  n = n%100;

  int third = n/10+2;
  int fourth = n%10+2;

  cout <<"This number is: " << first%10 << second%10 << third%10 << fourth%10 <<endl;

  return 0;
}
