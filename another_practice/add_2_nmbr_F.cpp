#include <iostream>
using namespace std;

int add (int, int);

int main()
{
    int sum;
    sum = add (100, 78);

    cout <<"Sum is: " << sum <<endl;

    return 0;
}

int add (int a, int b)
{
    return (a + b);
}
