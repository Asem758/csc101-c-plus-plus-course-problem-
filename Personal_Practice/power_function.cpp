#include <iostream>
using namespace std;
int main() {

  int x;
  cin >> x;

  int y;
  cin >> y;

  int result = 1;

  for (int i = 1; i <= y; ++i)
  {
      result = result * x;
  }

  cout << result <<endl;

  return 0;

}
