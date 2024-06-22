#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
    int r;
    r = a - b;
    return r;

}

int main()
{
    int x = 19, y = 22, z;
    z = subtraction (10, 1);
    cout <<"The first result is: " << z <<endl;
    cout <<"The second result is: " << subtraction (10, 1) <<endl;
    cout <<"Third result is: " << subtraction (x,y) <<endl;

    z = 4 + subtraction (x,y);

    cout <<"The fourth result is: " << z << endl;

    return 0;
}
