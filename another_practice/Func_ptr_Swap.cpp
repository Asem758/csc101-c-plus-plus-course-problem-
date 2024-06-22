#include <iostream>
#include <stdio.h>

using namespace std;

void swap (int *n1, int *n2)
{
   int temp = *(n1);
   *(n1) = *(n2);
   *(n2) = temp;

   cout << "N1 = " << *n1 <<endl <<"N2 = "  << *n2 <<endl;

}

int main()
{
    int num1 = 10, num2 = 20;

    cout << "Num1 = " << num1 <<endl << "Num2 = " << num2 <<endl;

    swap (&num1, &num2);


}
