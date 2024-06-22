#include <cstdio>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
   double a[5],input;
   int i, count,n;
   count = 0;
   n = 5;
   a[0] = 2;
   a[1] = 5;
   a[2] = 7;
   a[3] = 10;
   a[4] = 9;
   cout <<"Sample Input: input = ";
   cin>>input;

   cout<<"Sample Outputs"<<endl;
   cout<<"Array Elements:"<<' ';

   for (i=0;i<n; i++)
   {
       if(a[i]!=input)
       {
           count += 1;
       }
       cout<<a[i]<<' ';
   }

   cout<<"\n"<<endl;
   cout<<input<<"\tis NOT present in\t"<<count <<"\tplaces"<<endl;

   return 0;
}

