#include <iostream>
using namespace std;

int* funcArray()
{
    int arr[3] = {8,6,7};
    return arr;
}

int main()
{
    int* arrPtr = funcArray();
    cout << arrPtr[0];
    cout << arrPtr[1];
    cout << arrPtr[2];

    return 0;
}
