#include <iostream>
#include <string>
using namespace std;
bool isReverse(string s1,string s2);
int main() {
string s1,s2;

cout << "Please enter two strings"<<endl;
cout<<"Enter the First string : ";
getline(cin,s1);
cout <<"Enter the Second string : ";
getline(cin,s2);

if (isReverse(s1, s2)==1)
cout<<"The two strings are reverse of each other";
else if (isReverse(s1, s2)==0)
cout<<"The two strings are not reverses of each other"<<endl;
return 0;
}
bool isReverse(string s1,string s2){

if(s1.length()>0 && s2.length()>0)
{
char a = s1[0];
char b = s2[s2.length()-1];

if(a>=97 && a<=122)
{
a = a-32;
}

if(b>=97 && b<=122)
{
b = b-32;
}

if(a!=b)
return false;

return isReverse(s1.substr(1), s2.substr(0, s2.length()-1));

}
else if(s1.length()==0 && s2.length()==0)
return true;
else
return false;


}
