#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void mystrcat(int c[], int a[], int b[])
{
    for(int i=0 ; i<5 ; ++i)

        c[i] = a[i];

    for(int i=0 ; i<5 ; ++i)

        c[i+5] = b[i];
}

int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {10,-1,5,123,59};
    int c[10];

    for(int i = 0 ; i<10; ++i)
        c[i] = 0;

    mystrcat(c,a,b);

    for(int i = 0 ; i<10; ++i)
       cout<<c[i]<<" ";
}

