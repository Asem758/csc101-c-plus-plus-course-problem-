#include <iostream>
using namespace std;
float sub (float, float);
float div (float, float);

int main() {

  float a = 5, b = 3, x,y; float z;
  x = a + b;
  y = sub (a,b);
  z = div (a,b);

  cout <<"add: " << x <<endl;
  cout <<"sub: " << y <<endl;
  cout <<"div: " << z <<endl;

  return 0;

}

 float sub (float p, float q)
 {
     int r = p - q;
     return r;
 }

 float div (float p, float q)
 {
    float s = p / q;
    return s;
 }

