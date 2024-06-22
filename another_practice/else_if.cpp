#include <iostream>
using namespace std;
int main() {

  int x = 19 , y = 22 , z = 1;
  if(x > y && x > z )
  {
      cout <<"X is the greatest number " <<endl;
  }
  else if(y > x && y > z)
  {
      cout <<"Y is the greatest number " <<endl;
  }
  else
  {
      cout <<"Z is the greatest number " <<endl;
  }
  return 0;

}
