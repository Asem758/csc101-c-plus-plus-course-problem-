#include <iostream>
using namespace std;

void swap (int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 22, b = 23;

    cout <<"Before Swap " <<endl;
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;

    cout <<endl;

    swap (a, b);

    cout <<"After Swap " <<endl;
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;

    return 0;
}
