#include<iostream>
using namespace std;
int main()
{
    int i, j, rowNum, space, num=1;

    cout<<"Enter the Number of Rows: ";
    cin>>rowNum;

    space = rowNum-1;

    for(i=1; i<=rowNum; i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
        num = 1;
    }

    space = 1;

    for(i=1; i<=(rowNum-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(rowNum-i)-1); j++)
        {
            cout<<num;
            num++;
        }

        cout<<endl;
        num = 1;
    }

    cout<<endl;
    return 0;
}
