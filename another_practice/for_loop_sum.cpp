#include <iostream>
using namespace std;
int main() {

  int sum = 0, i, n;

  for(int i = 0; i < 10; i++)
  {
      cout <<"Enter the number: ";
      cin >> n;

      sum = sum + n;
  }

  cout << "sum is: " << sum <<endl;

  return 0;
}
