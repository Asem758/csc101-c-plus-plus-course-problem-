#include <iostream>
using namespace std;

int addFun (int a , int b)
{
    return (a + b);
}

int main()
{
    int num1, num2, sum;

    cout << "Enter Two number: ";
    cin >> num1 >> num2;

    sum = addFun (num1, num2);

    cout << "Sum of Two Number: " << sum <<endl;

}
