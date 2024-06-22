#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char line[100],alphaStr[100];
    int j = 0;

    cout << "Enter a String: ";
    cin.getline (line, 100);

    for (int i = 0; line[i] != '\0'; i++)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            alphaStr[j++] = line[i];
        }
    }

    alphaStr[j] = '\0';

    cout <<endl;

    cout << "Output String: " << alphaStr;

    getch();

    return 0;
}

