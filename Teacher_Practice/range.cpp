#include <iostream>
using namespace std;
int main() {

  char x;
  cout <<"Enter the number: ";
  cin >> x;

  if (x >= 'a' && x < 'b')
  {
      if (x % 3 == 0 && x % 4 != 0)
      {
          cout << x <<endl;
      }
      else
      {
          cout << x <<endl;
      }
  }

  return 0;

}
