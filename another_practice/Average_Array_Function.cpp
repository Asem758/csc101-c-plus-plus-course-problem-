#include <iostream>
using namespace std;

void AverageNum (int arr[], int size)
{
    double avg;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    avg = double(sum) / size;
    return avg;
}

int main()
{
    int numArray[5] = {9,10,19,22,23};
    double avg;

    avg = AverageNum (numArray, 5);

    cout <<"Average Value is: " << avg <<endl;

    return 0;
}
