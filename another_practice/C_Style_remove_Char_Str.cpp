#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char line[100], alphabetString[100];
    int j = 0;

    cout << "Enter a String: ";
    cin.getline (line, 100);

    for (int i = 0; line[i] != '\0'; i++)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            alphabetString[j++] = line[i];
        }
    }

    alphabetString[j] = '\0';

    cout <<endl;

    cout << "Output String: " << alphabetString;

    getch();

    return 0;
}
