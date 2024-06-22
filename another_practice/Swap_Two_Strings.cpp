 #include <iostream>
 #include <stdio.h>
 #include <string.h>

 using namespace std;

 int main()
 {
    char str1[50], str2[50], strTemp[50];

    cout << "Enter the First String: ";
    gets (str1);

    cout << "Enter the Second String: ";
    gets (str2);

    cout << "\nString Before Swap: \n";
    cout << "First Strung = " << str1 << "\tSecond String = " << str2 ;

    strcpy (strTemp, str1);
    strcpy (str1, str2);
    strcpy (str2, strTemp);

    cout << "\n\nString After Swap: \n";
    cout << "First String = " << str1 << "\tSecond String = " << str2;

    cout << endl;

    return 0;
 }
