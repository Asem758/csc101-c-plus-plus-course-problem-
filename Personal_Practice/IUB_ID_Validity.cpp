#include <iostream>
#include <string>

using namespace std;

void checkValidity (string str)
{
    bool isValid = true;

    if (str.size() != 8)
    {
        isValid = false;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if ((int) str[i] < 48 || (int) str[i] > 57)
        {
            isValid = false;
        }
    }

    if (isValid == false)
        cout << "Not Valid" <<endl;

    else
        cout << "Valid" <<endl;
}

int main()
{
    string str = "20217719";
    checkValidity (str);

    return 0;
}
