#include <iostream>
using namespace std;

void uppercase_string (string str)
{
	for(int i=0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	cout<<"\n String in Uppercase letter: " << str;
}

int main()
{
	string str;

    cout<<"Enter the string: ";

    getline(cin,str);
	uppercase_string (str);

	return 0;
}
