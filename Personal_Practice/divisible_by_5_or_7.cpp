#include <iostream>
using namespace std;
int main() {

  int x = 0;
  cout <<"Enter a number: " <<endl;
  cin >> x;

  if(x%5 == 0 || x%7 == 0)
  {
      cout <<"Yes " <<endl;
  }
  else
  {
      cout <<"No " <<endl;
  }
  return 0;

}
