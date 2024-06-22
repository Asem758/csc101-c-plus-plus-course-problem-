#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *ptr = &a[3];

    cout << *(ptr) <<endl << *(ptr+1) <<endl  << *(ptr-1) <<endl;

}
