#include <iostream>
using namespace std;

void halfPyramid();
void invertedHalfPyramid();
void FullPyramid();
void invertedFullPyramid();

int main()
{
    int ch;

    do
        {
            cout << "1. Print Half Pyramid stars \n";
            cout << "2. Inverted Half Pyramid Stars \n";
            cout << "3. Full Pyramid Stars \n";
            cout << "4. Inverted Full Pyramid of Stars \n";
            cout << "5. Exit \n";

            cout << "Enter the choice: ";
            cin >> ch;

            switch (ch)
            {
                case 1:
                         halfPyramid();
                         break;

                case 2:
                         invertedHalfPyramid();
                         break;

                case 3:
                         FullPyramid();
                         break;

                case 4:
                         invertedFullPyramid();
                         break;

                case 5:
                         return 0;

                default:
                         cout << "\nWrong Choice! ";
                         break;
            }

        }

        while (ch >= 1 && ch <= 4);

        cout <<endl;
        return 0;
}

void halfPyramid()
{
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout <<endl;
    }

    cout <<endl;
}

void invertedHalfPyramid()
{
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = i; j < 6; j++)
        {
            cout << "* ";
        }

        cout <<endl;
    }

    cout <<endl;
}

void FullPyramid()
{
    int i, space, j;

    for (i = 1; i <= 6; i++)
    {
        for (space = 1; space <= (6 - i); space++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout <<endl;
    }

    cout <<endl;
}

void invertedFullPyramid()
{
    int i, space, j;

    for (i = 1; i <= 6; i++)
    {
        for (space = 1; space < i; space++)
        {
            cout << " ";
        }

        for (j = i; j <= 6; j++)
        {
            cout << "* ";
        }

        cout <<endl;
    }

    cout <<endl;

}
