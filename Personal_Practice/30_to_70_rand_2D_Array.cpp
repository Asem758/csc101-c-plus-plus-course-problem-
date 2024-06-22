#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int table[3][4] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int a = rand() % 10;
            table[i][j] = a;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << table[i][j] <<" ";
        }

        cout <<endl;
    }

    return 0;
}
