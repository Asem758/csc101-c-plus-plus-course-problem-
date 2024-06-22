#include <iostream>
using namespace std;

float average (int num1, int num2);

int main() {

  int num1, num2;
  float c;

  cout <<"Enter the first number: ";
  cin >> num1;

  cout <<"Enter the second number: ";
  cin >> num2;

  c = average (num1, num2);
  cout <<"Average is: " << c <<endl;

  return 0;

}

float average (int num1, int num2)
{
    float avg;
    avg = (num2 + num2) / 2.0;

    return avg;
}
