#include<iostream>
using namespace std;

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

int main()
{
    int num1,num2,ret;
    num1 = 100;
    num2 = 200;
    ret=Maximum(num1,num2);
    cout<<ret<<endl;

    return 0;

}





