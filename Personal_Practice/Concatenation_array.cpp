#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int myStarlen (char c[])
{
    int i = 0;
    while (c[i] != '\0')
        ++i;
    return i;
}

void myStrcat (char c[], char a[], char b[])
{
    int lenA = Strlen (a);
    int lenB = Strlen (b);

    for (i = 0; i < lenA; i++)
         c[i] = a[i];

    for (int k = 0; k < lenB; k++)
         c[lenA + k] = b[k];

    c[lenA + lenB] = '\0';
    cout << c <<endl;
}

int main()
{
    char a[] = {'h','e','l','s','o','\0'};

    char b[] = {'j','e','l','s','o','\0'};

    cout << Strcat (a,b) <<endl;

    char c [myStrlen (a) + myStrlen (b)];

    for (int i = 0; i < my Strlen (a) + myStrlen (b); i++)
        c[i] = 'a';

    myStrcat (c,a,b);

    return 0;
}

