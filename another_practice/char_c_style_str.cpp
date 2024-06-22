#include <iostream>
using namespace std;

int main ()
{

    char s[] = " My Love Sadia ", check = 'm';
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (check == s[i])

            ++ count;

    }

    cout << "Frequency of " << check << " = " <<count;

    return 0;
}
