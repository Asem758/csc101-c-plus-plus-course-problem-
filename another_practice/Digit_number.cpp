#include <iostream>
using namespace std;
int main() {

  int n,first,second,third,fourth,fifth,sum;
  n = 22231;

  first = n/10000;
  n = n%10000;

  second = n/1000;
  n = n%1000;

  third = n/100;
  n = n%100;

  fourth = n/10;
  fifth = n%10;

  sum = first + fourth;
  cout <<"Sum is: " << sum <<endl;

  return 0;
}