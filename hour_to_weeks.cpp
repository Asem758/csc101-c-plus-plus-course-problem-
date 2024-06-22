#include <iostream>
using namespace std;
int main() {

   int h,w,d,h1,h2;
   cout <<"Input the number of hours: ";
   cin >> h;

   w = h / 168;
   h1 = h % 168;
   d = h1 / 24;
   h2 = h1 % 24;

   cout << w << " week " << d << " Days " << h2 << " Hours " <<endl;

   return 0;

}
