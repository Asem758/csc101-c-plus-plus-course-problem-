#include <iostream>
using namespace std;
int main() {

  int choice = 1;
  while ( choice == 1 )
  {
      int a;
      cout << "Enter a number to check even or odd " <<endl;
      cin >> a;

      if ( a%2 == 0 )
      {
          cout << "Your number is even " <<endl;
      }
      else
      {
          cout << "Your number is odd " <<endl;
      }

      cout << "Want to check more: 1 for yes and 0 for no " <<endl;
      cin >> choice;

  }

  cout << "I hope you checked all your number " <<endl;

  return 0;
}
