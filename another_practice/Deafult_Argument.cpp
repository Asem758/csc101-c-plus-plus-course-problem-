#include <iostream>
using namespace std;

void display (char = '*', int = 3);

int main()
{
    int count = 5;
    cout << "No Argument Passed: ";

    display ();

    cout << "First Argument Passed: ";

    display ('#');

    cout << "Both Argument Passed: ";

    display ('$', count);

    return 0;
}

void display (char c, int count)
{
    for (int i = 0; i <= count; i++)
    {
        cout << c;
    }

    cout <<endl;
}

