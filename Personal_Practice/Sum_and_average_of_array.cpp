#include <iostream>
using namespace std;
int main() {

  double num [6] = {7, 5, 6, 12, 35, 27};

  double sum = 0;
  double count = 0;
  double average;

  for (int i = 0; i < 6; i++)
  {
      sum = sum + num [i];
  }

  cout <<"Sum is = " << sum <<endl;

  average = sum / 6;

  cout <<"Average is = " << average <<endl;

  return 0;

}
