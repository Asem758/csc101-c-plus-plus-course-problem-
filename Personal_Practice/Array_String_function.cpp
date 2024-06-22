#include <iostream>
#include <cstring>
using namespace std;

void fun2 (string str2)
{
    cout <<"The passing para inside fun 2 is: " << str2 <<endl;
}

string fun (int a [], int b, float c [], int d, string str)
{
    for (int i = 0; i < b; i++)
    {
        a[i] = a[i] * a[i];
    }

    for (int i = 0; i < d; i++)
    {
        c[i] = c[i] + c[i];
    }

    str = str + str;

    fun2 (str);
    return str;
}

int main()
{
    int x[4] = {1,4,5,10}, y = 4; float z[3] = {2.5, 3.3, 4.3}; string str = " IUB ";

    string sentence = fun (x,y,z,3,str);

    for (int i = 0; i < 4; i++)
    {
        cout << x[i] <<" ";
    }
    cout <<"\n";

    for (int i = 0; i < 3; i++)
    {
        cout << z[i] <<" ";
    }

    cout <<"\n" << sentence;
}

