#include <iostream>
using namespace std;

int sum (int x, int y)
{
    return x + y;
}

void print_my_name()
{
    cout << "Asem " <<endl;
}

int main()
{
    int a = 40, b = 50;

    int result = sum (a, b);

    cout << result <<endl;

    print_my_name();
}
