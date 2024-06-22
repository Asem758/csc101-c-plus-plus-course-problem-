#include <iostream>
using namespace std;

float myFunction (float, int);
void myFunc (int);
void Func2 ();

int main()
{
    double z = myFunction (10.5, 5);

    cout << z <<endl;
    return 0;
}

float myFunction (float x, int y)
{
    cout <<"I just got executed " <<endl;
    x = x + 1;
    myFunc (x);
    return x;
}

void myFunc (int a)
{
    Func2 ();
    cout << a <<endl;
}

void Func2 ()
{
    cout <<"This is Function 2 Function " <<endl;
}
