#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int myStrlen (char c[])
{
    int i = 0;
    while (c[i] != '\0')
    i++;
    return i;

}

void mystarcat (char c[], char a[], char b[])
{
    int lenA = Strlen(a);
    int lenB = Strlen(b);

    for (int i = 0; i < lenA; i++)

        c[i] = a[i];

    for (int k = 0; k < lenB; k++)

        c[lenA + K] = b[k];
        c[lenA + lenB] = '\0';

        cout << c <<endl;

}

int main()
{
    char a[] = {'h','e','l','l','o','\0'};
    char b[] = {'j','e','l','l','o','\0'};

    cout << starcat(a,b) <<endl;

    char c[myStarlen(a) + myStarlen (b)];

    for (int i = 0; i < myStrlen(a) + myStrlen(b); i++)
        c[i] = 'a';
    myStarcat (c,a,b);

    return 0;
}
