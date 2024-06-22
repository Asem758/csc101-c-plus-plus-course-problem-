#include <iostream>
using namespace std;
int main() {

 float x;
 cout <<"Enter a number: " <<endl;
 cin >> x;

 int a;
 a = (int) x;
 cout << a <<endl;

 float b = x - (a * 1.0);
 cout << b <<endl;

 return 0;

}
