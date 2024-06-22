#include <iostream>
using namespace std;
int main() {

  float f;
  cout <<"Please enter the value of Fahrenheit: " <<endl;
  cin >> f;

  float celsius = (f - 32) * (5.0/9.0);
  cout <<" Temperature in Celsius: " << celsius <<endl;

  return 0;


}
