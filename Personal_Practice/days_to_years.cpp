#include <iostream>
using namespace std;
int main() {

  int days;
  cout <<"Number of days: " <<endl;
  cin >> days;

  int years = days / 365;
  int days1 = days % 365;
  int month = days1 / 30;
  int days2 = days1 % 30;

  cout <<"Remaining days: " << days2 <<endl;
  cout <<"Number of years: " << years <<endl;
  cout <<"Number of months: " << month <<endl;

  return 0;

}
