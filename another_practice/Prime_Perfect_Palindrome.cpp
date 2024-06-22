#include <iostream>
using namespace std;

bool checkPrimeNumber(int);

int main() {
    int n;

    cout << "Enter a positive  integer: ";
    cin >> n;

    if (checkPrimeNumber(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}

bool checkPrimeNumber(int n) {
    bool isPrime = true;


    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main() {

   int n;
   int sum = 0;
   cout <<"Please enter a number: ";
   cin >> n;

   for (int i = 1; i < n; ++i)
    {
      if (n % i == 0)
        {
            cout << i <<endl;

            sum = sum + i;
        }
    }
    if (sum == n)
        cout <<"Perfect number " <<endl;
    else
        cout <<"Not perfect number " <<endl;

    return 0;

}

int main() {

  int n, rev = 0, rem, temp;
  cout <<"Enter the number: ";
  cin >> n;

  temp = n;

  while ( temp != 0)
  {
      rem = temp % 10;
      rev = rev * 10 + rem;
      temp = temp / 10;
  }

  cout <<"Reversed number: " << rev <<endl;

  if (n == rev)
    cout <<"Palindrome " <<endl;
  else
    cout <<"Not Plaindrome " <<endl;

  return 0;
}

