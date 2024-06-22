#include <iostream>
using namespace std;

int main()
{
   double c,f;
   cout << "Enter the Celsius: ";
   cin >> c;

   f = 1.8 * c + 32;
   cout << "Value of Fahrenheit: " << f <<endl;

   return 0;
}
