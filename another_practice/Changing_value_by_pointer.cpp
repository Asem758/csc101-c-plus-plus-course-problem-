#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    int *pointVar;

    pointVar = &var;

    cout <<"Var = " << var <<endl;
    cout << "*PointVar = " << *pointVar <<endl;

    cout <<endl;

    cout <<"Changing value of var to 19: " <<endl;

    var = 19;

    cout <<"Var = " << var <<endl;
    cout << "*PointVar = " << *pointVar <<endl;

    cout <<endl;

    cout <<"Changing value of var to 22: " <<endl;

    var = 22;

    cout <<"Var = " << var <<endl;
    cout << "*PointVar = " << *pointVar <<endl;

    return 0;
}
