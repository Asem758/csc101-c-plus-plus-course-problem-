#include <iostream>
using namespace std;
// begining of function
int fun(int n,int &p1,int &p2)
{
  int  reversedNumber = 0,sum=0, remainder;
  while(n != 0) {
        remainder = n%10;
        sum=sum+remainder;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    p2=sum; //returning sum of digits
    p1=reversedNumber; //returning Sum of the reverse number

}
//end of the function


//main function
int main() {
  int n,p1,p2;

    cout << "Enter an integer: ";
    cin >> n;

    fun(n,p1,p2);
    cout << "Reverse Number: " <<p1;
    cout << "\nSum of the reverse number: " <<p2;



    return 0;
}

