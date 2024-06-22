#include <iostream>
using namespace std;
int main() {

  int minutes;
  cout <<"Enter the number of minutes: ";
  cin >> minutes;

  int week = minutes / 10080;
  int week_d = minutes % 10080;
  int day = week_d / 1440;
  int day_d = week_d % 1440;
  int hours = day_d /60;
  int minutes1 = day_d % 60;


  cout << week<<" Weeks" <<"," << day <<" Days"<<","<< hours <<" Hours"<<","<< minutes1 <<" Minutes"<<endl;

  return 0;

}
