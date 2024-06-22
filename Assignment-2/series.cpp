#include <iostream>
using namespace std;
int main() {

  int sum = 0;

  for (int i = 1; i <= 100; i = i + 2)
  {
      sum = sum + 1/i;
      if (i == 100)
      {
          cout << i <<"=";
      }
      else
      {
          cout << i <<"+";
      }
  }
  cout << sum <<endl;

  return 0;
}
