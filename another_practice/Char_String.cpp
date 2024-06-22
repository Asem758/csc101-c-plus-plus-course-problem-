#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string str = " I Love my Family ";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    getch();

    return 0;
}
