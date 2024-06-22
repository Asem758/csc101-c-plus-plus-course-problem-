#include <iostream>
using namespace std;

int max (int a, int b)
{
    if (a > b)
       return a;
    else
       return b;
}

int main()
{
    int x, y;

    cout << "Enter the number: ";
    cin >> x >> y;

    int m = max (x,y);

    cout << "Maximum Number is: " << m <<endl;

}
