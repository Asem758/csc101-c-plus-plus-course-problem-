#include <iostream>
using namespace std;

int reverse (int n)
{
    int temp = 0, rev = 0, sum = 0;

    while (n != 0)
    {
        temp = n % 10;
        rev = (rev * 10) + temp;
        n = n / 10;
        sum = sum + temp;
    }

    cout <<"Reverse number is: " << rev <<endl;

    return sum;

}

int reverse (int n);

int main()
{
    int n = 0, result = 0, sum = 0;

    cout <<"Enter the number: ";
    cin >> n;


    sum = reverse(n);


    cout <<"Sum of reverse number: " << sum <<endl;

    return 0;
}
