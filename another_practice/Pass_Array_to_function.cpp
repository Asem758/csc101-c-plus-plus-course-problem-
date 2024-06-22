#include <iostream>
#include <string>

using namespace std;

void Square (int fibseq[])
{
    cout <<"Square Array: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        fibseq[i] = fibseq[i] * fibseq[i];
    }
}

int main()
{
    int numArray[5] = {5,8,9,4,6};
    Square (numArray);

    for (int i = 0; i < 5; i++)
    {
        cout << numArray[i] <<" ";
    }
}
