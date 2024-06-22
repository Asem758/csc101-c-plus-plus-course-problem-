#include <iostream>
using namespace std;

int fun(int n,int &s1,int &s2)
{
  int  rev = 0,sum=0, rem;

  while(n != 0)
    {
        rem = n%10;
        sum=sum+rem;
        rev = (rev *10) + rem;
        n /= 10;
    }

    s2=sum;
    s1=rev;

}


int main() {
  int n,s1,s2;

    cout << "Enter a Number: ";
    cin >> n;

    fun(n,s1,s2);

    cout << "Reverse Number: " <<s1;
    cout << "\nSum of the reverse number: " <<s2;



    return 0;
}

