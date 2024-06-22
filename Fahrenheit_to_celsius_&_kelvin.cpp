#include <iostream>
using namespace std;
int main() {

  float f,c,k;
  cout <<"Fahrenheit in temperature: ";
  cin >> f;

  c = f-32 * (5.0/9.0);
  k = c + 273.15;

  cout <<"Celsius: " << c <<endl;
  cout <<"Kelvin: "  << k <<endl;

  return 0;

}
