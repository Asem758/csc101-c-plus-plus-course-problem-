#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

float calculatedSD (float data [])
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    for (int i = 0; i < 10; i++)
    {
        sum += data[i];
    }

    mean = sum / 10;

    for (int i = 0; i < 10; i++)
    {
        standardDeviation += pow (data[i] - mean, 2);

    }

    return sqrt (standardDeviation / 10);

}

int main()
{

    float data [10];

    cout << "Enter 10 elements: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> data[i];
    }

    cout << "\nStandard Deviation = " << calculatedSD (data);

    getch();

    return 0;
}
