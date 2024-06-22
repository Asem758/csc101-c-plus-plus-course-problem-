#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << &a[i] <<endl;
    }

    cout << "Address of a: " << a <<endl;
}
