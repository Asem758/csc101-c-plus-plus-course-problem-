#include <iostream>
using namespace std;
int main() {

  float sum = 0,s;
  float num;
  cout <<"Enter a number: ";
  cin >> num;

  for (int i = 1; i <= 10; i = i + 1)
  {
      sum = sum + num;
      s = num / 10;
  }

  cout <<"Average is: " << s <<endl;

  return 0;

}
