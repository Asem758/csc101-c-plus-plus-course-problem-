#include <iostream>
#include <string>
using namespace std;


void question12 (string str)
{
    int numOfWords = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            numOfWords = numOfWords + 1;
        }
    }

    cout <<"Words number: " << numOfWords+1 <<endl;
}

int main()
{
     string h = "Today is Sunday ";
     question12 (h);

     string g = "Today is Monday";
     question12 (g);

     return 0;
}
