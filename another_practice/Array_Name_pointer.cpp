#include <iostream>
using namespace std;

int main()
{
    float arr[5];

    cout <<"Enter 5 number: " <<endl;

    for (int i = 0; i < 5; i++)
    {
       cin >> *(arr + i);
    }
    cout <<endl;

    cout <<"Displaying Data: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) <<endl;
    }

    return 0;
}
