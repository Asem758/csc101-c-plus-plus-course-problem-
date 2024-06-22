#include <iostream>
#include <cstdlib>

using namespace std;

void question11 (int numArray[], int numofelement)
{
    int mini = 10000;
    int maxi = -10000;

    int sum = 0;

    for (int i = 0; i < numofelement; i++)
    {
        sum = sum + numArray[i];

        if (numArray[i] > maxi)
            maxi = numArray[i];

        if (numArray[i] < mini)
            mini = numArray[i];
    }

    cout <<" Minimum is: " << mini <<endl;
    cout <<" Maximum is: " << maxi <<endl;
    cout <<" Average is: " << sum / numofelement <<endl;

}

int main()
{
    int numArray[5] = {9,10,19,22,23};
    question11 (numArray,5);

    return 0;
}
