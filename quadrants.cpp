#include <iostream>
using namespace std;
int main() {

  int x,y;
  cout << " X = ";
  cin >> x;
  cout << " Y = ";
  cin >> y;

  if (x > 0 && y > 0)
  {
      cout << " 1st quadrant " <<endl;
  }
  else if (x < 0 && y > 0)
  {
      cout << " 2nd quadrant "  <<endl;
  }
  else if (x < 0 && y < 0)
  {
      cout << " 3rd quadrant " <<endl;
  }
  else if (x > 0 && y < 0)
  {
      cout << " 4th quadrant " <<endl;
  }
  else if (x == 0 && y == 0)
  {
      cout << " The origin " <<endl;
  }
  else if (x != 0 && y == 0)
  {
      cout << " X axis " <<endl;
  }
  else if (x == 0 && y != 0)
  {
      cout << " Y axis " <<endl;
  }
  else
  {
      cout << "This is wrong input " <<endl;
  }
  return 0;

}
