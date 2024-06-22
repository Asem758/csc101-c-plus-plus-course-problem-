#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int m;

    cout << "Enter the Marks: ";
    cin >> m;


    if (m > 100)
    {
        cout << "Invalid Number ";
    }

    else if (m < 0)
    {
        cout << "Invalid Number " <<endl;
    }

    else if (m >= 80)
    {
        cout << " A+ ";
    }

    else if (m >= 70)
    {
        cout << " A ";
    }

    else if (m >= 60)
    {
        cout << " A- ";
    }

    else if (m >= 50)
    {
        cout << " B+ ";
    }

    else if (m >= 40)
    {
        cout << " B ";
    }

    else if (m >= 33)
    {
        cout << " D ";
    }

    else if (m < 33)
    {
        cout << " F ";
    }

    else
    {
        cout << "You are not eligible " <<endl;
    }

    getch();

    return 0;
}
