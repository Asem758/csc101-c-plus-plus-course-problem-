#include <iostream>
#include <ctime>

using namespace std;

float avg(int a[3])
{
float m=0;
for(int i = 0;i < 3; i++)
m+=a[i];
return m/3;
}

int main()
{
  srand((unsigned) time(0));

  int upper,lower;
  cin>> lower >> upper;

  int a[3][3];

  for(int i = 0;i < 3; i++)
  for(int j = 0;j < 3; j++)

  a[i][j] = (rand() % upper) + lower;

  for(int i=0;i<3;i++)
  cout<<avg(a[i])<<endl;

  return 0;
}
