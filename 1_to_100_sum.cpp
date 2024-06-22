#include <iostream>
using namespace std;
int main() {

  int sum = 0;
  for (int i = 1; i <= 100; i++)
    {
        if (i < 100)
        {
            cout << i <<" + ";
            sum = sum + i;
        }
        else
            cout << i <<" = ";
            sum = sum + i;
    }

    cout << sum <<endl;

    return 0;
}
