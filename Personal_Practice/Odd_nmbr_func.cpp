#include <iostream>
using namespace std;

void printOddNum (int n)
{
   int arr[5];

   for (int i = 0; i < n; i++)
   {
       arr[i] = 2 * i + 1;
   }

   for (int i = 0; i < n; i++)
   {
       cout << arr[i] <<" ";
   }
}

int main()
{
    int b = 5;

    printOddNum (b);

    return 0;
}
