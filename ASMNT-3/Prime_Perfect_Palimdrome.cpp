#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
if (n <= 1)
return false;
for (int i = 2; i < n; i++)
if (n % i == 0)
return false;
return true;
}
int main()
{
int n;
cout<<"enter a number"<<endl;
cin>>n;
isPrime(n) ? cout << " true\n" : cout << " false\n";
return 0;
}

#include<iostream>
using namespace std;
int main ()
{
int i,n,rem,sum=0;
cout<<"Enter a number"<<endl;
cin>>n;
for(i=1;i<n;i++)
{
  rem=n%i;
  if(rem==0)
  sum=sum+i;
}
  if(sum==n)
  cout<<"Perfect Number ";

  else
  cout<<"Not perfect Number ";
  return 0;
}

#include<iostream>
using namespace std;
int main ()
{
int i,n,rem,sum=0;
cout<<"Enter a number"<<endl;
cin>>n;
for(i=1;i<n;i++)
{
rem=n%i;
if(rem==0)
sum=sum+i;
}
if(sum==n)
cout<<"True";

else
cout<<"False";

return 0;
}

