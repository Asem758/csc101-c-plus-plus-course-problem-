#include <iostream>
#include <conio.h>

using namespace std;

int fun (int n, int &p1, int &p2)
{
    int reverseNumber = 0, sum = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        reverseNumber = reverseNumber * 10 + rem;
        n /= 10;
    }

    p2 = sum;
    p1 = reverseNumber;
}

int main()
{
    int n, p1, p2;

    cout << "Enter an integer: ";
    cin >> n;

    fun (n, p1, p2);

    cout << "Reverse Number: " << p1 <<endl;
    cout << "\nSum of Reverse Number: " << p2;

    getch();

    return 0;
}
