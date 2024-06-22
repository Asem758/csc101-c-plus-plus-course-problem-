#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Please enter the number: ";
  cin >> x;

  if (x % 5 == 0 || x % 7 == 0)
  {
      cout << "Divisible by 5 or 7 " <<endl;
  }
  else
  {
      cout << "Not divisible by 5 or 7 " <<endl;
  }

  return 0;

}
