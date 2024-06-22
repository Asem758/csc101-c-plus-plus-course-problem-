#include <iostream>
#include <stdio.h>

using namespace std;

int sum (int *a, int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + *(a + i);
    }

    return sum;
}

int main()
{
    int arr[3] = {10, 20, 30};

    int result = sum (arr, 3);

    cout << " Total Sum is = " << result <<endl;
}
