#include <iostream>
using namespace std;
int main() {

  int x = 4;
  if (x % 2 ==0)
  {
      x = x + 1;
  }

  for (int i = x; i <= 15; i = i + 2)
  {
      cout << i <<" ";
  }

  return 0;

}
