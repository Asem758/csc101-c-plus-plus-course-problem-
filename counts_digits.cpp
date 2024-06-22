#include <iostream>
using namespace std;
int main() {

  int count = 0;

  int n,temp;
  cout <<"Enter the number: ";
  cin >> n;

  temp = n;

  while (temp != 0)
   {

    count ++;

    temp = temp / 10;

   }

   cout << "Number of digits: " << count <<endl;


  return 0;

}
