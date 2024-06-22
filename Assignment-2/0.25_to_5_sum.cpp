#include <iostream>
using namespace std;
int main() {

  int sum = 0;

  for (float i = 0.25; i <= 5; i = i + 0.25)
  {

      if (i < 5)
      {
          sum = sum + i;
          cout << i <<" + ";
      }
      else
      {
          sum = sum + i;
          cout << i <<" = ";
      }
  }

  cout << sum <<endl;

  return 0;
}
