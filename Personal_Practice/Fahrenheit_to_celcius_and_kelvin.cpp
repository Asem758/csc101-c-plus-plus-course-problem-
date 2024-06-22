#include <iostream>
using namespace std;
int main() {

  float fahrenheit;
  cout <<"Enter the temperature in Fahrenheit: " <<endl;
  cin >> fahrenheit;

  float celsius = (fahrenheit - 32) * (5.0/9.0);
  float kelvin = celsius + 273.15;

  cout <<"Temperature in Celsius: " << celsius <<endl;
  cout <<"Temperature in kelvin: " << kelvin <<endl;

  return 0;

}
