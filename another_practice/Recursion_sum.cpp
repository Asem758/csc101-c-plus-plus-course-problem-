#include <iostream>
using namespace std;

int seq_sum (int n)
{
    if (n == 1)
    {
        return 1;
    }

    return seq_sum (n -1) + n;
}

int main()
{
    cout << seq_sum(5) <<endl;
}
