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
          A[i][j]=rand()%10;
        }
    }

    cout<<"The 2D array:\n\n";
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n\nUpper Triangle:\n\n";
        for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          if(j>i)
          {
              cout<<A[i][j]<<"  ";
          }
          else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl<<"Upper triangle sum: \n";
    int sum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          if(j>i)
          {
              sum+=A[i][j];
              cout<<A[i][j]<<"+";
          }
        }
    }
    cout<<"\b \b ="<<sum;
}

