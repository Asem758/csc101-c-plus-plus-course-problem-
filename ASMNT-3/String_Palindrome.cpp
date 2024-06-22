#include <iostream>
#include <stdbool.h>
using namespace std;

bool isPalindrome(string str)
{

bool flag = true;
int stringSize = 0;


while (str[stringSize] != '\0')
stringSize++;


for(int i=0; i<stringSize/2; i++)
 {
   if(str[i] != str[stringSize-i-1])
  {
  flag = false;
  break;
  }
 }
  return flag;
}

int main()
{

  string str;


  cout<<"Enter a string: ";
  cin>>str;


  if(isPalindrome(str))
  cout<<"It is a palindrome.";

  else
  cout<<"It is not a palindrome";

  return 0;
}

