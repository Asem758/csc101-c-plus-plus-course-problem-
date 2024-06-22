#include <iostream>
using namespace std;

int divide (int a, int b = 2)
{
    int r;
    r = a / b;
    return r;
}

int main()
{
    cout <<"1st divide: " << divide (12) <<endl;
    cout <<"2nd divide: " << divide (20,4) <<endl;

    return 0;
}
