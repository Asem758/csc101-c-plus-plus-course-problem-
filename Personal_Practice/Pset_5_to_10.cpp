#include <iostream>
using namespace std;
int main() {

  int sum = 1, num = 0, count = 0, total_sum = 0;
  cout <<"Enter the number: ";
  cin >> num;

  for (int i = 0; i < num; ++i)
  {
      sum = count + sum;
      count++;
      total_sum = total_sum + sum;

      if (i == num - 1)
      {
          cout << sum <<" = ";
      }
      else
      {
          cout << sum <<" + ";
      }
  }

  cout << total_sum <<endl;

  return 0;


}
