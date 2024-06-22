#include <iostream>
using namespace std;

int main()
{
    int x,y,z;

    cout << "Enter the number: ";
    cin >> x >> y>> z;

    int *ptr1, *ptr2, *ptr3;

    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;


    if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        cout << *ptr1 << " is a largest Number " <<endl;
    }

    else if (*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {
        cout << *ptr2 << " is a largest Number " <<endl;
    }
    else
    {
        cout << *ptr3 << " is a largest Number " <<endl;
    }

    return 0;
}
