#include<iostream>
#include<algorithm>

using namespace std;

string backwardOrder(string str)
{
    int index = 0,x=0;
    reverse(str.begin(), str.end());

    while(x < str.length())
    {
        if(str[x] == ' ')
        {
             reverse(str.begin() + index, str.begin() + x);
             index = x + 1;
        }
        x += 1;
    }
    if(str[str.length() - 1] != ' ')
    {
        reverse(str.begin() + index, str.end());
    }
    return str;
}
int main()
{
    string str;

    cout<<"Please Enter a sentence: ";
    getline(cin, str);

    cout << backwardOrder(str);
    return 0;
}

