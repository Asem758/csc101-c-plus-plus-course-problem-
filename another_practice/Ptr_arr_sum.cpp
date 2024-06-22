#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        //cout << *(a + i) <<endl;
        sum = sum + *(a + i);
    }

    cout << "Sum is = " << sum <<endl;

}
