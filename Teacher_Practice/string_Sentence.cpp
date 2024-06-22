#include<iostream>
#include<string>

using namespace std;

string wordReverse(string str)
{
    int end=str.length();
    string result;

    for(int i=str.length()-1;i>=0;--i)
    {
        if(str[i]==' ')
        {
            for(int j=i+1;j<end;++j)
                {
                    //cout<<j<<"..."<<end<<endl;
                    result += str[j];
                }
            result += ' ';
            end = i;
        }
    }

    for(int j=0;j<end;++j)
        {
            result += str[j];
        }

    return result;
}

int main()
{
    string str;
    cout<<"Enter Your String :";getline(cin,str);cout<<endl;
    cout << wordReverse(str);

    return 0;
}
