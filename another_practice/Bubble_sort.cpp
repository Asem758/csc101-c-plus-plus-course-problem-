#include <iostream>
using namespace std;

int main()
{
    int i,j,temp;
    int a[6] = {9,10,19,22,23,1};

    cout <<"Input list...\n";

    for (i = 0; i < 6; i++)
    {
        cout << a[i] <<"\t";
    }

    cout <<endl;

    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout <<"Sorted element list...\n";

    for (i = 0; i < 6; i++)
    {
        cout << a[i] <<"\t";
    }

    return 0;
}
