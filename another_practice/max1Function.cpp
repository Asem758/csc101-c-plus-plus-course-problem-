#include<iostream>
using namespace std;

int Maximum(int num1, int num2);

int main()
{
    int num1,num2,ret,ex,ey;
    num1 = 100;
    num2 = 200;
    ex =100;
    ret=Maximum(num1,num2);
    ey=ex +ret;

    cout<<ey<<endl;

    return 0;

}

int Maximum(int num1, int num2)
{
    int result;
    if (num1>num2)
    {
        result = num1;
    }
    else{
       result = num2;
    }
    return result;

}


