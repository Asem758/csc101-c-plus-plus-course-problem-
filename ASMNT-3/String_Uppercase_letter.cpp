#include <iostream>
using namespace std;

string upper_string(string str)
    {
        for(int i=0; str[i] != '\0'; i++)
               {
                    if (str[i] >= 'a' && str[i] <= 'z')

                      str[i] = str[i] - 32;

               }
        return str;
}
int main()
     {
       string str;
       string Ustr;

       cout<<"Enter the string: ";

       getline(cin,str);
       Ustr=upper_string(str);

       cout<<"\nThe string in Uppercase: "<< Ustr;

      return 0;
}

