#include <iostream>
using namespace std;

void display (int fibseq[5])
{
    cout <<"Display Array: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << fibseq[i] <<" ";
    }
}

int main()
{
    int numArray[5] = {7,9,4,6,8};
    display (numArray);

    return 0;
}
