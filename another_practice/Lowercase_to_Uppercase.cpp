#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char strLower[50], strUpper[50];
    int ascii, i=0, chk=0;
    cout<<"Enter the String: ";
    gets(strLower);
    while(strLower[i]!='\0')
    {
        if(strLower[i]>='a' && strLower[i]<='z')
        {
            ascii = strLower[i];
            ascii = ascii-32;
            strUpper[i] = ascii;
            chk++;
        }
        else
            strUpper[i] = strLower[i];
        i++;
    }
    strUpper[i]='\0';
    if(chk==0)
        cout<<"\nString is already in Uppercase";
    else
        cout<<"\nUppercase of String: "<<strUpper;
    cout<<endl;
    return 0;
}
