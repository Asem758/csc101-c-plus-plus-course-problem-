#include <iostream>
using namespace std;

double getAverage (int* arr[], int size)
{
    int sum = 0;
    double avg;

    for (int i = 0; i < size; i++)
    {
        sum+= arr[i];
    }

    avg = double(sum) / size;
    return avg;
}

int main()
{
    int arrNum[5] = {6,9,7,5,7};
    getAverage (arrNum);

    for (int i = 0; i < 5; i++)
    {
        cout << arrNum[i] <<" ";
    }
}
