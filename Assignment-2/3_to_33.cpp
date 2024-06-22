#include <iostream>
using namespace std;
int main() {

  for (int i = 3; i <= 33; i = i + 3)
  {
      cout << i <<" ";
      if (i < 33)
      {
          cout << ",";
      }
  }

  return 0;
}
