#include <iostream>
using namespace std;
int main() {

  int radius;
  cout <<"Enter the radius of circle: " <<endl;
  cin >> radius;

  int area = 3.14 * radius * radius;
  int perimeter = 2 * 3.14 * radius;

  cout <<"Area is: " << area <<endl;
  cout <<"Perimeter is: " << perimeter <<endl;

  return 0;


}
