#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter a value for position "<<i<<j<<" of matrix A : ";
            cin>>A[i][j];
        }
    }

    cout<<endl<<endl;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter a value for position "<<i<<j<<" of matrix B : ";
            cin>>B[i][j];
        }
    }

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=B[i][j]-A[i][j];
        }
    }

    cout<<endl<<endl<<"Matrix A= \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<"Matrix B= \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<"Matrix C= \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
}

