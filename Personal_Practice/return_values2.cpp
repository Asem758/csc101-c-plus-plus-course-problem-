#include <iostream>
using namespace std;

int myFunction (int x, int y)
{
    return x + y;
}

int main()
{
    int z = myFunction (10, 19);
    cout << z <<endl;

    return 0;
}
