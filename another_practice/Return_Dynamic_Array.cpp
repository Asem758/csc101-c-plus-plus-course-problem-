#include <iostream>
using namespace std;

int* myFuncArray()
{
   int* arr = new int[3];
   arr[0] = 0;
   arr[1] = 1;
   arr[2] = 2;

   return arr;
}

int main()
{
    int* aryPtr = myFuncArray();
    cout << aryPtr[0] <<" " <<aryPtr[1] <<" "<<aryPtr[2];

    return 0;
}
