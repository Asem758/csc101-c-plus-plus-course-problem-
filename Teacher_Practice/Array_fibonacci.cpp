#include <iostream>
using namespace std;
int main() {

  int fib1 = 0, fib2 = 1, result = 0;

  int A[10];
  for (int i = 0; i < 10; ++i)
  {
      if (i == 0)
      {
          A[i] = fib1;
      }
      else if (i == 1)
      {
          A[i] = fib2;
      }
      else
      {
          result = fib1 + fib2;
          A[i] = result;
          fib1 = fib2;
          fib2 = result;
      }
  }

  cout <<"The number in array are: ";

  for (int i = 0; i < 10; ++i)
    {
        cout << A[i] <<" ";
    }

  return 0;

}
