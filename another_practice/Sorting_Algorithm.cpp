#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

// Function prototypes

void printArray (int array [], int size);

void initArray (int array[], int size);

int linearSearch (int array[], int size, int value);

int binarySearch (int array[], int size, int value);

void swap (int &a, int &b);

int bubbleSort (int array [], int size);

int selectionSort (int array[], int size);

int main()

{

const int ARRAY_SIZE = 100;

int numbers1 [ARRAY_SIZE];

int numbers2 [ARRAY_SIZE];

// Generate array of numbers from 1 to ARRAY_SIZE

initArray(numbers1, ARRAY_SIZE);

for(int i=0 ;i<ARRAY_SIZE; ++i)

numbers2[i] = numbers1[i];

// Print out Array

printArray (numbers1, ARRAY_SIZE);

int bCnt = bubbleSort(numbers1, ARRAY_SIZE);

int sCnt = selectionSort(numbers2, ARRAY_SIZE);

cout << "\n For Bubble Sort, It took " << bCnt << " exchanges... \n";

cout << "\n For Selection Sort, It took " << sCnt << " exchanges... \n";

return 0;

}

/******************************

* Print out array elements

******************************/

void printArray (int array[], int size)

{

for (int i=0; i<size; i++)

cout << "array [" << i << "] = " << array [i] << endl;

cout << endl;

}

/******************************

* Initialize array with random numbers

******************************/

void initArray (int array[], int size)

{

unsigned seed = time (0);

srand(seed);

for (int i=0; i< size; i++)

array [i] = 1 + rand() % size;

}

/******************************

* Linear Search

******************************/

int linearSearch (int array[], int size, int value)

{

int index = 0;

int position = -1;

bool found = false;

while (index < size && !found)

{

if (array[index] == value)

{

found = true;

position = index;

}

index++;

}

return position;

}

/******************************

* Binary Search

******************************/

int binarySearch (int arr[], int size, int value)

{

int first = 0;

int last = size -1, middle;

int position = -1;

bool found = false;

while (!found && first <= last)

{

middle = (first + last)/2;

if (arr[middle] == value)

{

found = true;

position = middle;

}

else if (arr[middle] > value)

last = middle - 1;

else

first = middle + 1;

}

return position;

}

/******************************

* Swap two values

******************************/

void swap (int &a, int &b)

{

int temp = a;

a = b;

b = temp;

}

/******************************

* Bubble Sort Algorithm

******************************/

int bubbleSort (int array [], int size)

{

int maxElement;

int index;

int SwapCnt = 0;

for (maxElement = size - 1; maxElement > 0; maxElement--)

for (index = 0; index < maxElement; index++)

if (array [index] > array [index + 1]){

swap (array [index], array [index + 1]);

++SwapCnt;

}

return SwapCnt;

}

/******************************

* Selection sort algorithm

******************************/

int selectionSort (int array[], int size)

{

int minIndex, minValue;

int SwapCnt = 0;

for (int start = 0; start < (size - 1); start++)

{

minIndex = start;

minValue = array[start];

for (int index = start+1; index < size; index++)

{

if (array[index] < minValue)

{

minValue = array[index];

minIndex = index;

}

}

++SwapCnt;

swap (array[minIndex], array [start]);

}

return SwapCnt;

}
