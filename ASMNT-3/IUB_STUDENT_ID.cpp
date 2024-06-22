#include<iostream>
#include<ctype.h>
using namespace std;

bool check(string s) {
        if(s.length()!=7)
                return false;
        string ss = "";

        for(int i=0; i<3; i++)
                ss+=s.c_str()[i];

        if(ss!="IUB")
                return false;

        for(int i=3; i<s.length(); i++)

        if(!isdigit(s.c_str()[i]))
               return false;
               return true;
}


int main() {
        string s;

        cout<<"Enter IUB Student ID: ";
        cin>>s;

        if(check(s))
                cout<<"The ID is Valid";
        else
                cout<<"The ID is not Valid";
}

