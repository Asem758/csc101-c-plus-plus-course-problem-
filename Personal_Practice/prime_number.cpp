#include <iostream>
using namespace std;
int main() {

  int num = 1;
  cin >> num;

  int isPrime = 1;

  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
  {
      isPrime = 0;
  }
  }
  if (isPrime == 1)

      cout << num << " is Prime " <<endl;
  else
    cout << num << " is not prime " <<endl;

  return 0;

}
