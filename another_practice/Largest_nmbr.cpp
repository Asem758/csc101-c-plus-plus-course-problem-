#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Enter three number: ";
    cin >> n1 >> n2 >> n3;

    cout <<endl;

    if (n1 > n2 && n1 > n3)
    {
        cout << "Largest Number: " << n1;
    }

    else if (n2 > n1 && n2 > n3)
    {
        cout << "Largest Number: " << n2;
    }

    else
    {
        cout << "Largest Number: "  << n3;
    }

    cout <<endl;



    return 0;
}
