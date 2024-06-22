#include <iostream>
using namespace std;

void display (char *);
void display (string);

int main()
{
   string str1;
   char str[100];

   cout <<"Enter a String: ";
   getline(cin, str1);

   cout <<"Enter another String: ";
   cin.get(str, 100, '\n');

   display (str1);
   display(str);

   return 0;
}

void display(char s[])
{
    cout <<"Entered char Array is: " << s <<endl;
}

void display (string s)
{
    cout <<"Enter String is: " << s <<endl;
}


