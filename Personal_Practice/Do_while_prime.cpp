#include <iostream>
using namespace std;
int main() {

  int n;
  do
  {
      int isPrime = 1;

      cout <<"Enter the number of check prime: ";
      cin >> n;

      for (int i = 2; i < n; i++)
      {
          if (i % n == 0)
          {
              isPrime = 0;
              break;
          }
      }

      if (n <= 1)
        cout <<"Bye bye " <<endl;

      else if (isPrime = 1)
        cout << n <<" Is a prime number: " <<endl;

      else
        cout << n <<" Is not a prime number: " <<endl;
  }

  while (n > 1);

  return 0;

}
