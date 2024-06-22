#include <iostream>
using namespace std;
int main() {

  int sum = 0;
  for (int i = 2; i <= 1024; i = i * 2)
  {
      if (i < 1024)
      {
          cout << i <<" + ";
          sum = sum + i;
      }
      else
      {
          cout << i << " = ";
          sum = sum + i;
      }
  }

  cout << sum <<endl;

  return 0;
}
