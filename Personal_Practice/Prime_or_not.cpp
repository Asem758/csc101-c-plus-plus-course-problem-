#include <iostream>
using namespace std;
int main() {

  for (int n = 2; n < 20; ++n)
  {
      int isPrime = 1;

      for (int i = 2; i < n; ++i)
      {
          if (n % i == 0)
          {
               isPrime = 0;
          }
      }

      if (isPrime == 1)
        cout << n <<"is Prime " <<endl;
      else
        cout << n <<"is not prime " <<endl;
  }

  return 0;

}
