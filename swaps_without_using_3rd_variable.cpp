#include <iostream>
using namespace std;
int main() {

  int a,b;
  cout <<"please enter the number: ";
  cin >> a >> b;

  cout << "Before swap a = " << a << " b = " << b <<endl;

  a = a * b;  // a = 50 (5*10)
  b = a / b;  // b = 5 (50/10)
  a = a / b;  // a = 10 (50/5)

  cout << "After swap a = " << a << " b = " << b <<endl;

  return 0;

}
