#include <iostream>
#include <stack>
#include <string>

using namespace std;

char x,y;
string text;
stack <char>s;

bool isempty(char x, char y)
{
    if (x == '(' && y == ')')
    {
        return true;
    }
    else if (x == '{' && y == '}')
    {
        return true;
    }
    else if(x == '[' && y == ']')
    {
        return true;
    }
}

bool isfull(string text)
{
    stack<char>s;

    for (int i = 0; i < text.length(); i++)
    {
          if(text[i] == '(' || text[i] == '{' || text[i] == '[')
                {
                    s.push(text[i]);
                }

		else if(text[i] == ')' || text[i] == '}' || text[i] == ']')
		{
			if(S.empty() || !isempty(S.top(),text[i]))
            {
               return false;
            }

			else
            {
                S.pop();
            }

		}
    }
}

int main()
{
   string name;
   cout<<"Enter a name:  ";
   cin>>name;

	if(isfull(name))
    {
        cout<<"Balanced\n";
    }
	else
    {
       cout<<"Not Balanced\n";
    }

}
