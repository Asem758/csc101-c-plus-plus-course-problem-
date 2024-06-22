#include <iostream>
using namespace std;
int main() {

   int n;
   int sum = 0;
   cout <<"Please enter a number: ";
   cin >> n;

   for (int i = 1; i < n; ++i)
    {
      if (n % i == 0)
        {
            cout << i <<endl;

            sum = sum + i;
        }
    }
    if (sum == n)
        cout <<"Perfect number " <<endl;
    else
        cout <<"Not perfect number " <<endl;

    return 0;

}
