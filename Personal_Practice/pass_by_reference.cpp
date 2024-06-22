#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void func (int a, int b, int &result1, int &result2, int &result3)
{
    int x = a;
    int y = b;
    result1 = x + y;
    result2 = x - y;
    result3 = x * y;
}

int main()
{
    int a = 3;
    int b = 4;
    int result1 = 0, result2 = 0;
    int result3 = 0;

    func (a, b, result1, result2, result3);

    cout <<"Sum: " << result1 <<" " <<"Subtraction: " << result2 <<" " <<"Product: " << result3 <<endl;

    return 0;
}
