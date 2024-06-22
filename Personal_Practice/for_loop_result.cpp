#include <iostream>
using namespace std;
int main() {

  int x;
  int y;
  cin >> x;
  cin >> y;
  float result = 1;

  if (y < 0)
  {
      y = y * (-1);
      for (int i = 0; i < y; i++)
        result = result * x;
        result = 1.0 / result;
  }
  else
  {
      for (int i = 0; i < y; i++)
        result = result * x;
  }

    cout << result <<endl;
    return 0;
}

