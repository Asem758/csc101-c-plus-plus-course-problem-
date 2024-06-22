#include <iostream>
using namespace std;
int main() {


   string a = "Hello ";
   int s = 0;

   for (int i = 0; i < a.length(); i++)
   {
       s = s + int (a[i]);
   }

   cout <<"ASCII value of hello is: " << s <<endl;


   return 0;

}
