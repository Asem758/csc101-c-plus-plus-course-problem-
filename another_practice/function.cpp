#include<iostream>
using namespace std;

void SumFunction()
{
    int a,b,c;
    cin>>a>>b;
    c= a+b;
    cout<<"Summation is :"<<c<< endl;
}
void MulFunction()
{
    int a,b,c;
    cin>>a>>b;
    c= a*b;
    cout<<"Multiplication is :"<<c<< endl;
}
void DivFunction()
{
    int a,b,c;
    cin>>a>>b;
    c= a/b;
    cout<<"Division is :"<<c<< endl;
}

int main()
{
    SumFunction();
    MulFunction();
    DivFunction();
    SumFunction();
    SumFunction();
    SumFunction();
    SumFunction();


    return 0;
}
