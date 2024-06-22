#include <iostream>
using namespace std;

int main()
{
    int i, j, tempVal, List[10];

 for (i=0; i<n-1; ++i)

	for (j=i+1; j<n; ++j)
		if(List[i] > List[j]){

			tempVal = List[i];
			List[i] = List[j];
			List[j] = tempVal;
		}

}



