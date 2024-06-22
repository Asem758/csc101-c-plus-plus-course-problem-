#include <iostream>
using namespace std;
int main() {

  int x,reverse = 0,rem;
  cout <<"Please enter the three digit positive integer number: ";
  cin >> x;

  while (x != 0)
  {
      rem = x%10;
      reverse = reverse*10+rem;
      x = x/10;
  }

  cout <<"Reversed Number: " << reverse <<endl;

  return 0;

}
