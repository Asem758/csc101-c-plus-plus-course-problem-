#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "Enter a String s1: ";
    getline (cin, s1);

   cout << "Enter a String s2: ";
   getline (cin, s2);

   result = s1 + s2;

   cout << "Resultant String: " << result;

   return 0;
}
