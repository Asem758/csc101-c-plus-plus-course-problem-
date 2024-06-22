#include<iostream>
using namespace std;
int main()
{
    int A[2][4];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
          cin>>A[i][j];
        }
    }
    int B[2*4];
    cout<<endl<<endl<<"Converted 1D array: \n\n\n";
        for(int i=0;i<2;i++)


        {
             for(int j=0;j<4;j++)
             {
                B[i*4+j] = A[i][j];
             }
        }

    for(int i=0;i<2*4;i++)
    {
        cout<<B[i];
        if(i!=(2*4)-1)
        {
            cout<<", ";
        }
    }
}

