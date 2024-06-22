#include <iostream>
using namespace std;

void cyclicSwap (int *a, int *b, int*c)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;

}

int main()
{
    int a, b, c;

    cout << "Enter value of A, B and C : ";
    cin >> a >> b >> c;

    cout <<endl;

    cout << "Value of before Swapping: " <<endl;

    cout <<endl;

    cout << " A = " << a << " B = " << b << " C = " << c << endl;

    cyclicSwap (&a, &b, &c);

    cout <<endl;

    cout << "Value after swapping number in cycle: " << endl;

    cout <<endl;

    cout << " A = " << a << " B =  " << b << " C = " << c <<endl;

    return 0;
}
