#include <iostream>
using namespace std;
int main() {

  for (int i = 1; i <= 100; i= i + 2)
  {
      cout << i <<" ";
      if (i < 100 - 1)
      {
          cout << ",";
      }
  }
  return 0;
}
