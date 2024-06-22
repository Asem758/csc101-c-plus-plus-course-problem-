#include <iostream>
using namespace std;
int main() {

  int s = 0;

  int count = 0,n,c;
  cout <<"Enter the number: ";
  cin >>n;

  while (n != 0)
  {

     c = n%10; 
     n= n/10; 
     s = s + c; // s = 0 + 5 = 5, s = 5 + 7 = 12, s = 12 + 2 = 14
     count++; // 1,2,3
  }
      float a = s/float (count);

      cout <<"Sum is: " << s <<endl;
      cout <<"Average is: " << a <<endl;


  return 0;
}
