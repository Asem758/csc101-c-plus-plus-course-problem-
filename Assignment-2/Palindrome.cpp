#include <iostream>
using namespace std;
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
    cout <<"Symmetric " <<endl;
  else
    cout <<"Not Symmetric " <<endl;

  return 0;
}
