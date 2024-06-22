#include <iostream>
#include <cstdlib>

using namespace std;

void question11 (int numArray1[], int numofelement)
{
    for (int i = 0; i < numofelement; i++)
    {
        numArray1[i] = numArray1[i] * numArray1[i];
    }
}

int main()
{
    int numArray[5] = {9,10,19,22,23};
    question11 (numArray, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << numArray[i] <<endl;
    }

    return 0;
}
