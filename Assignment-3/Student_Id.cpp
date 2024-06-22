#include <iostream>
#include <string>
using namespace std;

bool check(string s)
{
    if (s.length() != 7) {
        return false;
    }

    if (s[0] > 50 || s[0] < 48)
    {
        return false;
    }
        return true;
}

int main()
{
    string s;

    int x;
    cout << "IUB Student ID: ";
    getline(cin, s);

    x = check(s);
    if (x == 0)
    {
        cout << "The ID is Valid ";
    }
    else
    {
        cout << "The ID is not Valid ";
    }
    return 0;
}
