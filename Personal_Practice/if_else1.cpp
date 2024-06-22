#include <iostream>
using namespace std;
int main() {

  string day;
  string time;

  cout<<"Day: ";
  cin >> day;
  cout <<"Time: ";
  cin >> time;

  if(day == "Mon" && time == "8am")

  {cout<<"Today there is a CSC class " <<endl;}
  else {cout<<"There is no CSC class " <<endl;}

  return 0;

}
