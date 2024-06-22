#include <iostream>
using namespace std;

void squareArr(int arr[], int szofArr)
{
    for (int i = 0; i < szofArr; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main()
{
    int arr1[5] = {7,9,10,19,22};
    int sizeofArr = 5;

    squareArr (arr1, sizeofArr);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }

    return 0;
}
