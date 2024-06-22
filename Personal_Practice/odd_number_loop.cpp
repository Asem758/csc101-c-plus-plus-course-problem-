#include <iostream>
using namespace std;
int main() {

  int n1 = 0;
  cout <<"Enter the number: ";
  cin >> n1;

  int n2 = 0;
  cout <<"Enter another number: ";
  cin >>n2;

  if (n1 % 2 == 0)
    n1 = n1 + 1;

  for (int i = n1; i <= n2; i = i + 2)
  {
      cout << i <<" ";
  }

  return 0;

}
