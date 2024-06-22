#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the Number: ";
    cin >> num;

    if (num < 0)
    {
        cout << (-num) <<endl;
    }

    else
    {
        cout << num;
    }

    return 0;
}
