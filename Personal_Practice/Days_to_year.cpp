#include <iostream>
using namespace std;
int main() {

int days,year,months,week,days2,days3;
cout <<"Please enter your days: ";
cin >> days;

  year = days / 365;
  days2 = days % 365;
  months = days2 / 30;
  days3 = days2 % 30;
  week = days3 / 7;
  days3 = days2 % 7;

  cout << year << " Year " << months << " Months " << week << " Week " << days3 << " Days " <<endl;

  return 0;

}
