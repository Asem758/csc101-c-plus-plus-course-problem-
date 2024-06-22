#include <iostream>
using namespace std;

float myFunction (float, int);
void myFun(int);
void Fun2();

int main()
{
    double z = myFunction(10.5,5);
    cout << z <<endl;

    return 0;
}

float myFunction (float x, int y)
{
    cout << "I just got executed " <<endl;
    x = x + 1;
    myFun(x);
    return(x);
}

void myFun (int a)
{
    Fun2();
    cout << a <<endl;
}

void Fun2 ()
{
    cout <<"This is Fun 2 Function " <<endl;
}
