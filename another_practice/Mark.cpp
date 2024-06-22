#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Enter the Mark: ";
    cin >> mark;

    if (mark > 44)
    {
        if (mark >= 90)
        {
            cout << " A " <<endl;
        }

        else if (mark >= 85)
        {
            cout << " A- " << endl;
        }

        else if (mark >= 80)
        {
            cout << " B+ " <<endl;
        }

        else if (mark >= 75)
        {
            cout << " B " <<endl;
        }

        else if (mark >= 70)
        {
            cout << " B- " <<endl;
        }

        else if (mark >= 65)
        {
            cout << " C+ " <<endl;
        }

        else if (mark >= 60)
        {
            cout << " C " << endl;
        }

        else if (mark >= 55)
        {
            cout << " C- " <<endl;
        }

        else if (mark >= 50)
        {
            cout << " D+ " <<endl;
        }

        else if (mark >= 45)
        {
            cout << " D " << endl;
        }

    }

    else
    {
        cout << " F " <<endl;
    }

    return 0;
}
