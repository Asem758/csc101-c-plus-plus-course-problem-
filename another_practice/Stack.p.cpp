#include <iostream>
using namespace std;

char str[10];
char char_size = 10;
int index = -1;

bool isempty()
{
    if (index == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isfull()
{
    if (index == char_size-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int peek()
{
    if (isempty() == false)
    {
        return str[index];
    }
    else
    {
        cout << "Balanced " <<endl;
    }
}

void push(char string)
{
    if (isfull() == false)
    {
        index++;
        str[index] = string;
    }
    else
    {
        cout << "Not balanced " <<endl;
    }
}

void pop()
{
    if (isempty() == false)
    {
        index--;
    }
    else
    {
        cout << "balanced " <<endl;
    }
}

int main()
{
    int i;
    char str[i];

    cout << "Enter a String: ";
    cin >> str[i];

    for (int i = 0; i < 10; i++)
    {
        cout << str[i] <<endl;
    }

    cout << peek() <<endl;
}

