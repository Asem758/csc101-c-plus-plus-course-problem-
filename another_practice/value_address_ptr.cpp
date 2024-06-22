#include <iostream>
using namespace std;

int main()
{
    int var = 23;
    int *ptr = &var;

    cout << "Value of Var: " << *ptr <<endl;
    cout << "Address of Var: " << ptr <<endl;

    *ptr = 22;

    cout << "Pointer is: " << *ptr <<endl;

    return 0;
}
