#include <iostream>
using namespace std;
int main() {

  char x;
  int z = 0;

  while (z >= 0)
  {
      cout <<"Please enter a character: ";
      cin >> x;

      if (x >= 'A' && x <= 'Z')
      {
          cout <<"is an Uppercase letter " <<endl;
      }
      else if (x >= 'a' && x <= 'z')
      {
          cout <<"is an Lowercase letter " <<endl;
      }
      else if (x >= '0' && x <= '9')
      {
          cout <<"It's a digits " <<endl;
      }
      else
      {
          return 0;
      }


  }


}
