#include <iostream>
using namespace std;
int main() {

  float x;
  cout <<"Enter the number: ";
  cin >> x;

  x = x - int(x);
  if (x == 0)
  {
      cout << "This is integer number " <<endl;
  }
  else
  {
      cout << "This is floating point number " <<endl;
  }

  return 0;
}
