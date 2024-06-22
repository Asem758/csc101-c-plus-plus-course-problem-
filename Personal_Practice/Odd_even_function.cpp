#include <iostream>
using namespace std;

void odd (int x);
void even (int y);

int main()
{
    int i;
    do
    {
        cout <<"Please enter the number (0 to exit): ";
        cin >> i;

        odd(i);
    }

    while (i != 0);

    return 0;
}

void odd (int x)
{
    if ((x % 2) != 0)
       cout <<"It is odd number " <<endl;

    else
        even (x);
}

void even (int x)
{
    if ((x % 2) == 0)
        cout <<"It is even number " <<endl;

    else
        odd (x);


}
