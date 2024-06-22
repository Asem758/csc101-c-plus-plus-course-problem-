#include <iostream>
using namespace std;
int main() {

  int n = 10;
  int count = 0;

  for (int x = 2; x < 100; x++)
  {
      bool isPrime = true;

      for (int i = 2; i < x; ++i)
      {
          if (x % i == 0)
          {
              isPrime = false;
          }
      }

      if (isPrime == true)
      {
          cout << x <<endl;

          if (count == 10)
          ++count;
      }
  }

  cout << count <<endl;

  return 0;

}

