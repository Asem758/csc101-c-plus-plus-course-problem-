#include<iostream>
using namespace std;
int main(){

  int x;
  cout << "Please Enter the number: ";
  cin >> x;

  if(x >= 20 && x <85){

    if ( x%5 == 0 && x%2 != 0) {
        cout << " Yes " <<endl;

    }
    else
    {
        cout << " No " <<endl;
    }
  }
  return 0;
}
