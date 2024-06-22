#include <iostream>
using namespace std;

int binary_Search (int A[], int x)
{
    int l = 0, h = sizeof (A) - 1;
    int h2;
    int mid = (l + h2);

    while (l <= h)
    {
        if (x == A[mid])
        {
            return mid;
        }

        else if (x > A[mid])
        {
            l = mid + 1;
        }

        else
        {
            h = mid - 1;
        }
    }

    return -1;
}
