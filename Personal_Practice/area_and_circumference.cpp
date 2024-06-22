#include <iostream>
using namespace std;
int main() {

  float radius;
  cout <<"Enter the value of radius: " <<endl;
  cin >> radius;

  float area = 3.1416 * radius * radius;
  cout <<"Area of the circle is: " << area <<endl;

  float circum = 2 * 3.1416 * radius;
  cout <<"circumference of the circle is: " << circum <<endl;

  return 0;


}
