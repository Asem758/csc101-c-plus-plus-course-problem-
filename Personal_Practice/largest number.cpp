#include <iostream>
using namespace std;
int main() {

  int a,b,c;
  cout <<"Enter the value of A: ";
  cin >> a;

  cout <<"Enter the value of B: ";
  cin >> b;

  cout <<"Enter the value of C: ";
  cin >> c;

  if(a > b)
  {
      if (a > c)
      cout <<"A is greatest number " <<endl;
      else
        cout <<"C is greatest " <<endl;

  }
  else
  {
      if (b > c)
        cout <<"B is greatest " <<endl;
      else
        cout <<"C is greatest " <<endl;
  }
  return 0;

}
