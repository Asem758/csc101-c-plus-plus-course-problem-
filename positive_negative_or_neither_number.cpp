#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Please enter the number: ";
  cin >> x;

  if (x > 0)
  {
      cout << "This is positive number " <<endl;
  }
  if (x < 0)
  {
      cout << "This is negative number " <<endl;
  }
  else
  {
      cout << "This neither positive or negative number " <<endl;
  }

  return 0;
}
