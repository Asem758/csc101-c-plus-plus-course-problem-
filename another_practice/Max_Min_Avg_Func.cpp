#include <iostream>
#include <cstdlib>

using namespace std;

void question11 (int numberArray[], int numOfelement)
{
    int min = 10000;
    int max = -10000;

    float sum = 0;
    for (int i = 0; i < numOfelement; i++)
    {
        sum = sum + numberArray[i];

        if (numberArray[i] > max)
        {
            max = numberArray[i];
        }
        if (numberArray[i] < min)
        {
            min = numberArray[i];
        }
    }

    cout <<" Maximum: " << max <<" Minimum: " << min <<" Average: " << sum / numOfelement <<endl;
}

int main()
{
    int numArray[5] = {8,6,9,4,5};
    question11 (numArray, 5);

    return 0;

}
