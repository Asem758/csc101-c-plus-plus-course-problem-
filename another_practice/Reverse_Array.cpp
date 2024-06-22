#include <iostream>
using namespace std;

int main()
{
   int arr[10], i;

   cout <<"Enter the 10 Array elements: ";

   for (i = 0; i < 10; i++)
   {
       cin >> arr[i];
   }

   cout <<"\nThe Original Array is: \n" ;

   for (i = 0; i < 10; i++)
   {
       cout << arr[i] <<" ";
   }

   cout <<"\n\nThe Reverse of given Array is: \n";

   for (i = (10-1); i >=0; i--)
   {
       cout << arr[i] <<" ";
   }

   cout <<endl;
}
