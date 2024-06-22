#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Please enter the number: ";
  cin >> x;

  if (x % 3 == 0 && x % 5 == 0)
  {
      cout << "Divisible by 3 and 5 " <<endl;
  }
  else
  {
      cout << "Not divisible by 3 and 5 " <<endl;
  }

  return 0;

}
