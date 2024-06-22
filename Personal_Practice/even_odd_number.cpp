#include <iostream>
using namespace std;
int main() {

  int n;
  cout <<"Please enter a number: " <<endl;
  cin >> n;

  if(n <= 10)
  {
      cout <<"You entered a number lees than 10: " <<endl;

      if(n%2 == 0)
      {
          cout <<"This is a even number " <<endl;
      }
      else
      {
          cout <<"This is a odd number " <<endl;
      }

  }
  else
  {
      cout <<"You entered a number greater then 10 " <<endl;
  }
  return 0;

}
