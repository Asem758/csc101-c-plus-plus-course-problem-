#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>

using namespace std;

void minmaxavg (int arr[], int num, int &mymax, int &mymin, int &myavg)
{
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >  mymax)
        {
            mymax = arr[i];
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] < mymin)
        {
            mymin = arr[i];
        }
    }

    for (int i = 0; i < num; i++)
    {
        myavg+= arr[i];
    }

    myavg = myavg / num;
}

int main()
{
    int arr[] = {1, 10, -1};
    int mymin = 1000;
    int mymax = -1000;
    int myavg = 0;
    int num = 3;

    minmaxavg (arr, num, mymin, mymax, myavg);

    cout << mymin * 7 <<"  " << mymax + 90 <<"  " << myavg - 123 <<endl;
}

