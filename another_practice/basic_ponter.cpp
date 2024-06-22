#include <bits/stdc++.h>
using namespace std;

void name ()
{
    int val[3] = {3, 5, 7};

    int *ptr;

    ptr = val;

    cout << "Elements of the Array are: ";
    cout << ptr [0] << " " << ptr[1] << " " << ptr[2] <endl;

    return;
}

int main ()
{
    name();
    return 0;
}
