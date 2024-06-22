#include <iostream>
using namespace std;
int main() {

  int x;
  cout <<"Please enter first integer number: ";
  cin >> x;

  int y;
  cout <<"Enter the second integer number: ";
  cin >> y;


  for (int i = x; i <= x; i++)
  {
      for (int i = x; i <= y; i++)
      cout << i <<" ";
      if (i < x)
      {
          cout <<",";
      }
      else if (i < y)
        cout <<" ";

  }

  return 0;

}
