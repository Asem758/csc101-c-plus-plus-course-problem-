#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter any integer number : ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << (n * i) <<endl;
    }

    return 0;
}
