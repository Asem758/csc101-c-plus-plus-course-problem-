#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int A[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          cin>>A[i][j];
        }
    }
cout<<endl<<endl<<"Matrix A= \n";
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int c=0;
            for(int k=2;k<A[i][j];k++)
            {
                if(A[i][j]%k==0)
                {
                    c++;
                }
            }

                if(c==0)
                {
                    cout<<A[i][j]<<"  ";
                }
                else
                {
                    cout<<"    ";
                }
        }
        cout<<endl;
    }
}

