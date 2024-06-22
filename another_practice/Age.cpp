#include <iostream>
using namespace std;
int main() {

  int age;
  cout <<"Enter your age: " <<endl;
  cin >> age;

  if(age >= 18)
  {
      cout <<"You are 18+ " <<endl;
      cout <<"Eligible to vote " <<endl;
  }
  else
  {
      cout <<"You are not yet 18 " <<endl;
      cout <<"Not eligible to vote " <<endl;
  }
  return 0;

}
