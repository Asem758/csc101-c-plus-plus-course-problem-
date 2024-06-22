#include<iostream>
using namespace std;

void search(int arr[], int n){


	int i, j;
    for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1]){

			int temp = arr[j];
    		arr[j] = arr[j+1];
    		arr[j+1]= temp;
    }

}
    int binarySearch(int arr[], int p, int r, int num) {
		if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
      return mid ;
      if (arr[mid] > num)
      return binarySearch(arr, p, mid-1, num);
      if (arr[mid] > num)
      return binarySearch(arr, mid+1, r, num);
   }
   return -1;

}


int main(){
    int arr[]={4,10,2,1,3,6,5,2,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    search(arr, n);
   	cout<<"Sorted Array";
	for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl<<endl;


   int num = 2;
   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1)
   cout<< num <<" is not present in the array";
   else
   cout<< num <<" is present at index "<< index <<" in the array";




    return 0;
}


