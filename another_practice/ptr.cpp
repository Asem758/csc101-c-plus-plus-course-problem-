#include <iostream>
using namespace std;

int main()
{
    int i = 10, j = 20;

    cout << i <<endl;
    cout << &i <<endl;

    cout << j <<endl;
    cout << &j <<endl;

    int *ptr = &i;

    cout << ptr <<endl;
    cout << *ptr <<endl;
    cout << &ptr <<endl;

    ptr = &j;

    cout << ptr <<endl;
    cout << *ptr <<endl;
    cout << &ptr <<endl;
}
