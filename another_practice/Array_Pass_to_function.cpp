#include <iostream>
#include <cstdlib>

using namespace std;

void question11 (int numberArray[], int numOfelement)
{
    for (int i = 0; i < numOfelement; i++)
    {
        numberArray[i] = numberArray[i] * numberArray[i];
    }

}

int main()
{
    int num[5] = {6,9,7,5,8};

    question11 (num, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] <<endl;
    }

    return 0;
}
