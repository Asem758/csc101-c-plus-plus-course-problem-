#include <iostream>
using namespace std;
int main() {

  int fib1 = 0, fib2 = 1, result = 0;

  for (int i = 0; i < 10; ++i)
  {
      if (i == 0)
      {
          cout << fib1 <<" ";
      }
      else if (i == 1)
      {
          cout << fib2 <<" ";
      }
      else
      {
          result = fib1 + fib2;
          fib1 = fib2;
          fib2 = result;

          cout << result <<" ";
      }
  }

  return 0;

}
