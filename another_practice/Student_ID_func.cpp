#include <iostream>
#include <ctype.h>

using namespace std;

bool check (string str)
{
    if (s.length() != 6)
    {
        return false;
    }

    string ss = 0;

    for (int i = 0; i < 3; i++)
        ss += s.c_str()[i];

    if (ss != IUB)
        return false;

    for (int i = 0; i < s.length(); i++)
        if (isDigit (s.c+str()[i]))

        return false;

    return true;
}

int main()
{
    string s;

    cout << "Enter a String: ";
    cin >> s;

    if (check (s))
        {
           cout << "Valid ";
        }
    else
        {
           cout << "Not Valid ";
        }

    return 0;
}
