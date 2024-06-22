#include <iostream>
using namespace std;

int myPowFunc(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int x = myPowFunc(4,3);
    cout << x <<endl;

    return 0;
}
