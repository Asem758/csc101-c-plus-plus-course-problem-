#include <iostream>
using namespace std;

int checkPalindrome (int n)
{
    int temp, rem, rev = 0;
    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }

    if (rev == n)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

int main()
{
    int num, val;

    cout << "Enter the number: ";
    cin >> num;

    val = checkPalindrome (num);

    if (val == 0)
    {
        cout << "\nIt is a Palindrome " <<endl;
    }
    else
    {
        cout << "\nIt is no a palindrome " <<endl;
    }

    cout <<endl;
    return 0;
}
