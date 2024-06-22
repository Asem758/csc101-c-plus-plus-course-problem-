#include<iostream>
using namespace std;
int main()
{
    int s, e, i, j, c=0;
    
    cout<<"Enter the Starting Number: ";
    cin>>s;
    cout<<"Enter the Ending Number: ";
    cin>>e;
    cout<<"\nPrime Numbers between "<< s <<" and "<< e <<" are:\n";
    for(i = s; i <= e; i++)
    {
        for(j = 2; j < i; j++)
        {
           if(i%j == 0)
           {
               c++;
               break;
           }
        }
        if(c == 0 && i != 1)
            cout << i <<endl;
        c = 0;
    }
    cout<<endl;
    return 0;
}
