#include <iostream>
using namespace std;

bool checkForPrime(int num){
    bool numIsPrime = true;
    for(int j=2; j<num ; ++j){
        if(num%j == 0)numIsPrime = false;
    }
    if (numIsPrime == true)return true;
    else return false;
}
int numberOfPrimes(int array[], int sizeofArray)
{
    int count =0;
    for(int i=0; i<sizeofArray; ++i){
        int val = checkForPrime(array[i]);
        if(val == 1)count=count+1;
    }
    return count;
}
int main(){
    int sizeOfArray = 7;
    int myarray[sizeOfArray] = {7,2,3,4,8,14,13};
    int a = numberOfPrimes(myarray,sizeOfArray);
    cout<<"Number of prime: "<<a<<endl;

    return 0;
}


