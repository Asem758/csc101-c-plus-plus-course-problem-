#include <iostream>
using namespace std;
int main() {

  int hours;
  cout <<"Enter the number of hours: " <<endl;
  cin >> hours;

  int days1 = hours / 24;
  int hours2 = hours % 24;
  int weeks = days1 / 7;

  cout <<"Number of weeks: " << weeks <<endl;
  cout <<"Days remaining: " << days1 <<endl;
  cout <<"Hours remaining: " << hours2 <<endl;

  return 0;
}
