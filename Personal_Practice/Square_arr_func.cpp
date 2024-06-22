#include <iostream>
using namespace std;

void squareArray (int arr[], int szofArr)
{
    for (int i = 0; i < szofArr; i++)
    arr[i] = arr[i] * arr[i];

}

int main()
{
   int Arr1[5] = {7,9,10,19,22};
   int sizeofArr = 5;

   squareArray (Arr1, sizeofArr);

   for (int i = 0; i < 5; i++)
   {
       cout << Arr1[i] <<" ";
   }

   return 0;
}
