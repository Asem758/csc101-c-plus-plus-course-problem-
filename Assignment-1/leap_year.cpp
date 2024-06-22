#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Enter a leap leap year: ";
  cin >> x;

  if (x % 4 == 0 && x % 100 != 0)
  {
      cout <<"It's a leap year " <<endl;
  }
  else if (x % 400 != 0 && x % 100 == 0)
  {
      cout <<"It's not a leap year " <<endl;
  }
  else if (x % 400 == 0)
  {
      cout <<"It's a leap year " <<endl;
  }
  else
  {
      cout <<"It's a not a leap year " <<endl;
  }

  return 0;
}

