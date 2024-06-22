#include <iostream>
using namespace std;

int main()
{
    int revArr = 6;
    int arr[revArr] = {9,10,19,22,23,1};
    int szArr[revArr];

    for (int i = 0; i < revArr; i++)
    {
        szArr[revArr - 1 - i] = arr[i];
    }

    for (int i = 0; i < revArr; i++)
    {
        cout << szArr[i] <<" ";
    }

    return 0;
}
