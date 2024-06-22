#include <iostream>

using namespace std;

string test_Palindrome(string text) {

  string str1, str2;
  int str_len = int(text.size());

  for (int i = 0; i < str_len; i++){

    if((text[i] >= 'a' && text[i] <= 'z' ) || (text[i] >= 'A' && text[i] <= 'Z' ))
      str1 += tolower (text[i]);

    if((text[str_len-1-i] >= 'a' && text[str_len-1-i] <= 'z' ) || (text[str_len-1-i] >= 'A' && text[str_len-1-i] <= 'Z' ))
      str2 += tolower (text[str_len-1-i]);
  }

  if (str1 == str2)
    return "True";
  return "False";

}

int main() {
  cout << " Is SAAS a Palindrome? " << test_Palindrome("SAAS");
  cout << "\n Is MAM a Palindrome? " << test_Palindrome("MAM");
  cout << "\n Is APPLE a Palindrome? " << test_Palindrome("APPLE");
  return 0;

}

