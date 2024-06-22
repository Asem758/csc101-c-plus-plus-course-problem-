#include <iostream>
using namespace std;
int main() {
    double i;

  while (i <= 100)
  {

      cout <<"Enter the number: ";
      cin >> i;

      if ((int) i == float (i))
      {
          cout <<"Integer number " <<endl;
      }
      else if ((float) i == float (i))
      {
          cout <<"Floating point number " <<endl;
      }


  }

  return 0;



}
