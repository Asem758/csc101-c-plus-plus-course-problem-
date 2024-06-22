#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    for (int x = 0; x < 1000; x++)
    {
        cout <<endl;
    }

    cout <<"Clock ticks: " << clock() <<" Seconds: " << clock() / CLOCKS_PER_SEC;
}
