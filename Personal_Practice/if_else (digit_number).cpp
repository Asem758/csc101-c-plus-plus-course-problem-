#include <iostream>
using namespace std;
int main() {

  int n;
  cout <<"Enter an integer number between 1 & 99999: " <<endl;
  cin >> n;

  if(n <= 100 && n >= 1 )
  {
      cout <<"It's a two digit number " <<endl;
  }
  else if(n <= 1000 && n >= 100)
  {
      cout <<"It's a three digit number " <<endl;
  }
  else if(n <= 10000 && n >= 1000)
  {
      cout <<"It's a four digit number " <<endl;
  }
  else if(n <= 100000 && n >= 10000)
  {
      cout <<"It's a five digit number " <<endl;
  }
  else
  {
      cout <<"Number is not between 1 & 99999 " <<endl;
  }
  return 0;

}
