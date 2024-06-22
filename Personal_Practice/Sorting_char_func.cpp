#include <iostream>
using namespace std;

void bubbleSort (int arr[], int szofArr)
{
    for (int i = 0; i < szofArr; i++)
    {
        for (int j = 0; j < szofArr - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
}

int main()
{
    int input[5] = {'s','a','d','i','a'};
    int sizeofArr = 5;

    bubbleSort (input, sizeofArr);

    for (int i = 0; i < 5; i++)
    {
        cout << input[i] <<" ";
    }

    return 0;
}
