#include <iostream>
using namespace std;

int mySquare (int x)
{
    x = x * x;
    return x;
}

int main()
{
    int a = 3;
    int b = mySquare (a);
    cout << b <<endl;

    return 0;
}
