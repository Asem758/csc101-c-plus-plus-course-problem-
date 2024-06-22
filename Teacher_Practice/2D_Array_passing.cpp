#include <iostream>
#include <cstdlib>

using namespace std;

void ques(int numArray1[], int num)
{
    for(int i = 0; i < num; ++i)
    {
        numArray1[i] =  numArray1[i]*numArray1[i];


    }
}
int main()
{
    int numArray[5] ={5,7,2,9,3};


    ques(numArray, 5);

    for(int i = 0; i < 5; ++i)
    {
     cout<<numArray[i]<<endl;
    }



    return 0;
}
