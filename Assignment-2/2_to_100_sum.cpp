#include <iostream>
using namespace std;
int main() {

  int sum = 0;
  for (int i = 2; i <= 100; i = i + 2)
  {
      sum = sum + i;
      if (i == 100)
      {
          cout << i <<" = ";
      }
      else
      {
          cout << i << " + ";
      }
  }

  cout << sum <<endl;

   return 0;

}
