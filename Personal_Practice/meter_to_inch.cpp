#include <iostream>
using namespace std;
int main() {

  float height;
  cout <<"Enter the height in meter: " <<endl;
  cin >> height;

  float inCm = height * 100;
  float inInch = inCm / 2.54;
  float inFeet = inInch / 12;

  cout <<"Height in feet is " << inFeet <<endl;

  return 0;

}
