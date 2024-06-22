#include <iostream>
using namespace std;

int sum (int a, int b = 2)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = 19, y = 22;
    int z = sum (x , y);

    cout << z <<endl;

    z = sum(x);
    cout << z;

    return 0;
}
