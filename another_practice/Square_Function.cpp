#include <iostream>
using namespace std;

void mySquare (int x)
{
    x = x * x;
    cout << x <<endl;
}

int main()
{
    int a = 19;
    mySquare (a);

    return 0;
}
