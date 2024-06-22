#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int i, rnum, amount, first, last;

    cout << "Enter the Interval: ";
    cin >> first >> last;

    cout <<endl;

    cout << "How many Random numbers to Generate ? ";
    cin >> amount;

    cout <<endl;

    cout << "\List of " << amount << " Random Numbers between " << first << " and " << last;
    srand (time (0));

    for (i = 0; i < amount; i++)
    {
        rnum = rand() % (last + 1 - first) + first;
        cout << endl <<rnum;
    }

    cout <<endl;

    return 0;
}
