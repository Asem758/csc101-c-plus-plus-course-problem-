#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *ptr1, *ptr2;

    ptr1 = (int *) malloc(5 * sizeof(int));
    ptr2 = (int *) calloc(5,  sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL)
    {
        cout << "Memory is not allocated " <<endl;
    }

    else
    {
        cout << "Memory is allocation Successful " <<endl;
    }

    //free (ptr);

    //cout << "Memory Freed Successfully " <<endl;

    ptr1 = (int *) realloc(ptr1, 50);

    cout << "Memory Reallocation Successfully " <<endl;

    return 0;
}

