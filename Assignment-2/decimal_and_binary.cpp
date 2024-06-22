#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int dec_num,rem,oct_num = 0, s, s1;
  cout <<"Enter a decimal number: ";
  cin >> dec_num;

  cout <<"Decimal number is: " << dec_num <<endl;

  while (dec_num)
  {
      rem = dec_num%8;
      dec_num = dec_num/8;
      s = s + (rem * s1);
      s1 = s1 * 10;

  }

  cout <<"Octal number is: " << s <<endl;

  return 0;
}
