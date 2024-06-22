#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10,19,22,23,1};

    cout <<"The numbers are: ";

    for (const int &n : numbers)
    {
        cout << n <<" ";
    }

    cout << "\n The numbers are: ";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] <<" ";
    }

    return 0;
}
