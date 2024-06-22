#include <iostream>
using namespace std;
int sub(int a, int b, int c)
{
  int w=a-b-c;
  return w;
}


int add(int a, int b, int c)
{
  int r=a+b+c;
  int z=sub(a,b,c);
  cout<<z<<endl;
  return r;
}

int main ()
{
  cout << add (12,10,3) << '\n';

  return 0;
}
