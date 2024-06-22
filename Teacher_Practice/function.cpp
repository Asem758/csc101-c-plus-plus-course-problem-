#include <iostream>
using namespace std;
int sub(int ,int);
int mul(int ,int);
int div(int ,int);

int main ()
{
  int x=5, y=3, z,q,r,e;
  z=x+y;
  q=sub(x,y);
  r = mul(x,y);
  e = div(x,y);
  cout<< z <<endl;
  cout <<q;
  cout <<e;
  return 0;
}

int sub(int a, int b)
{
    int p=a-b;
    return p;
}

int mul(int a, int b)
{
    int m = a*b;
    return m;
}
int div(int a, int b)
{
    int v = a/b;
    return v;
}
