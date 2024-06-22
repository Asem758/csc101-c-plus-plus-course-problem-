#include <iostream>
using namespace std;
int main() {

  char x;

  while (x >= 0)
  {
      cout <<"Please enter a character: ";
      cin >> x;

      if (x >= 65 && x <= 90)
      {
          cout <<"is an Uppercase letter " <<endl;
      }
      else if (x >= 97 && x <= 122)
      {
          cout <<"is an Lowercase letter " <<endl;
      }
      else if (x >= 48 && x <= 57)
      {
          cout <<"It's a digits " <<endl;
      }
      else
      {
          cout <<"It's a Symbol " <<endl;
      }

  }

  return 0;
}
