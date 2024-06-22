#include <iostream>
using namespace std;

void DecToBinary()
{
    int n = 4;
    int binary_number = 0;
  int i = 1;

  while (n)
  {
      binary_number = binary_number + n % 2 * 1;
      i = i * 10;
      n = n / 2;
  }

  cout <<"Binary number is: " << binary_number <<endl;
}

int main() {

  DecToBinary();



  return 0;

}
