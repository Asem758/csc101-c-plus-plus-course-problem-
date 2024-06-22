#include<iostream>
using namespace std;

void MyFunction(string name = "Bangladesh")
{
    cout<<name<<endl;
}

int main()
{
   MyFunction();
   MyFunction("Dhaka");
   MyFunction("Srilanka");
}
