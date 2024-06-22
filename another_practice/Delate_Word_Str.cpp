#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str[200], wrd[20];
    int i, j, strLen, wrdLen, temp, chk = 0;

    cout << "Enter the String: ";
    gets (str);

    cout << "Enter the Word: ";
    cin >> wrd;

    strLen = strlen(str);
    wrdLen = strlen (wrd);

    for (i = 0; i < strLen; i++)
    {
        temp = i;

        for (j = 0; j < wrdLen; j++)
        {
            if (str[i] == wrd[j])

            i++;
        }

        chk = i - temp;

        if (chk == wrdLen)
        {
            i = temp;

            for (j = 1; j < (strLen - wrdLen); j++)

                str[j] = str[j + wrdLen];
                strLen = strLen - wrdLen;
                str[j] = '\0';

        }
    }

    cout << "\nNew String = " << str;
    cout << endl;

    return 0;

}

