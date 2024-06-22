#include <iostream>
using namespace std;
int main() {

  for (int i = 1; i <= 73; i = i + 2)
  {
      cout << i <<" ";
      if (i < 73)
      {
          cout <<",";
      }
  }

  return 0;

}
