#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two number: ";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout << "Sum: " << sum <<endl;

    int product = num1 * num2;
    cout << "Multiplication: " << product <<endl;

    float divides = (float) num1 / num2;
    cout << "Division: " << divides <<endl;

    int reminder = num1 % num2;
    cout << "Reminder: " << reminder <<endl;

    return 0;
}
