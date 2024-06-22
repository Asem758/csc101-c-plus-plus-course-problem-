#include<iostream>
using namespace std;

void MyFunction(int x,int y)
{
    int z;
    z = x+ y;
    cout<<"Summation is :"<< z<<endl;

}


int main()
{
    int a,b;
    cin>>a>>b;
    MyFunction(a,b);
    return 0;
}
