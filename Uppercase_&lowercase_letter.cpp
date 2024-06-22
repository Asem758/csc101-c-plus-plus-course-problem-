#include <iostream>
using namespace std;
int main() {

  char x;
  cout <<"Please input a single keyword: ";
  cin >> x;

  if (x >= 65 && x <= 83)
  {
      cout << "is an Uppercase letter " <<endl;
  }
  else if (x >= 97 && x <= 115)
  {
      cout << "is an Lowercase letter " <<endl;
  }
  else if (x >= 48 && x <= 57)
  {
      cout << "It's a digit " <<endl;
  }
  else
  {
      cout << "It's a Symbol " <<endl;
  }
  return 0;

}
