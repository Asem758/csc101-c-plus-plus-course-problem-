#include<bits/stdc++.h>//header file
using namespace std;
void strreverse(string s,string s1)//string reverse function
{
reverse(s.begin(),s.end());//the reverse function will reverse the string by taking two parameters starting address and ending address of the string
reverse(s1.begin(),s1.end());//the reverse function will reverse the string by taking two parameters starting address and ending address of the string
cout<<"Reverse of s1 is:"<<s<<endl<<"Reverse of s2 is:"<<s1<<endl;//printing string after reversed it
}
int checkEqualorNot(string s,string s1)//checking wheather the string are equal or not if they are it will return 1 else it will return 0
{
if(s==s1)
return 1;
return 0;
}
int main()//main method
{
string s,s1;//strings declaration
cout<<"Enter first string:"<<endl;
cin>>s;//inputting the string one
cout<<"Enter second string:"<<endl;
cin>>s1;//inputting the string two
strreverse(s,s1);//calling the string reverse function
if(checkEqualorNot(s,s1))//calling the chekEqualorNot function if they are equal it will print they are equal else they are not equal
{
cout<<"Strings are equal"<<endl;
}
else
cout<<"Strings are not equal"<<endl;
}
