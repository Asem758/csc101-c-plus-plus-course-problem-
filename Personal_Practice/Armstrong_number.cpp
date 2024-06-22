#include <iostream>
using namespace std;
int main() {

  int orgiNum, num, rem, sum = 0;
  cout <<"Enter the positive integer: ";
  cin >> orgiNum;

  num = orgiNum;

  while (num != 0)
  {
      rem = num % 10;
      sum = sum + rem * rem * rem;
      num = num / 10;
  }

  if (sum == orgiNum)
    cout << orgiNum <<" is an Armstrong Number " <<endl;

  else
    cout << orgiNum <<" is not an Armstrong Number " <<endl;

  return 0;

}
