#include <iostream>
using namespace std;

void display (int n)
{
    cout <<"Number is: " << n <<endl;
}

int main()
{
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    display (n);

    return 0;
}
