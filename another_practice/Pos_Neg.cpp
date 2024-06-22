#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Number is Positive " <<endl;
    }

    if (num < 0)
    {
        cout << "Number is Negative " <<endl;
    }

    if (num == 0)
    {
        cout << "Number is Zero " <<endl;
    }

    return 0;
}
