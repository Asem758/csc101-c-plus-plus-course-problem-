#include <iostream>
using namespace std;

int sum (int a, int b = 20) {

  int result;
  result = a + b;

  return (result);


}

int main()
{
    int a = 100;
    int b = 200;
    int result;

    result = sum (a, b);
    cout <<"Total sum is: " << result <<endl;

    result = sum (a);
    cout <<"Total sum is: " << result <<endl;

    return 0;
}
