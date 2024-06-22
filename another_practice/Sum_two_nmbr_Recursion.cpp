#include <iostream>
#include <conio.h>

using namespace std;

int addFun (int a, int b)
{
    if (b == 0)
        return a;

    else
        return (1 + addFun (a, b-1));
}

int main()
{
    int num1, num2, sum;

    cout << "Enter two number: ";
    cin >> num1 >> num2;

    sum = addFun (num1, num2);

    cout <<endl;

    cout << "Sum of two number: " << sum;

    getch();

    return 0;
}
