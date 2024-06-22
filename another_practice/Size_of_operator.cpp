#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int c = sizeof(a);
    cout << c <<endl;

    int x = sizeof(d);
    cout << x <<endl;

    int y = sizeof(ch);
    cout << y <<endl;

    int z = sizeof(name);
    cout << z <<endl;

    getch();

    return 0;
}
