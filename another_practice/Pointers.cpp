#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    int *pointVar;

    pointVar = &var;

    cout << "Var = " << var <<endl;
    cout <<"Address of Var (&Var): " << &var <<endl;

    cout << "PointVar = " << pointVar <<endl;
    cout <<"Content of the Address pointed to by pointVar (*pointVar) = " << *pointVar <<endl;

    return 0;
}
