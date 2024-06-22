#include <iostream>
using namespace std;

void bubbleSort (int arr[])
{
   int temp;

   for (int i = 0; i < 10; i++)
   {
      for (int j = 0; j < (10 - i - 1); j++)
      {
          if (arr[j] > arr[j + 1])
          {
              temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
          }
      }
   }
}

int main()
{
    int arr[10];

    cout << "Enter Array 10 elements: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    bubbleSort (arr);

    cout << "\nSorted list of an array is: \n";

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }

    cout <<endl;

    return 0;
}
