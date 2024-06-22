#include <iostream>
using namespace std;

void mySquare (int x[])
{
    x[0] = x[0] * x[0];
}

int main()
{
    int a[1] = {19};
    mySquare (a);
    cout << a[0] <<endl;

    return 0;
}
