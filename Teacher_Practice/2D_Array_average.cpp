#include<iostream>
using namespace std;
int main()
{

    int cities;
    int days;


    cout<<"Please enter the number of cities: ";
    cin>>cities;

    cout<<"Please enter the number of days: ";
    cin>>days;


    int matrix[cities][days];

    for(int i=0;i<cities;i++)
    {

        int total_methane = 0;
        cout<<"For City"<<(i+1)<<", Please enter the temperature for "<<days<<" consecutive days:"<<endl;
        for(int j=0;j<days;j++)
        {
            cout<<"Day "<<(j+1)<<" methane unit in ton: ";
            cin>>matrix[i][j];


            total_methane = total_methane + matrix[i][j];
        }


        float avg = float(float(total_methane)/float(days));

        cout<<"City"<<(i+1)<<", Average methane is "<<avg<<endl<<endl;

        if(avg > 50 && avg < 100)
            cout<<"City"<<(i+1)<<" is in danger."<<endl;
        else if(avg >= 100)
            cout<<"City"<<(i+1)<<" is not a liveable city."<<endl;
        else if(avg>20 && avg<50)
            cout<<"Methane emission must be reduced."<<endl;
        else if(avg>0 && avg<20)
            cout<<"Methane emission is in tolerated level."<<endl;
        cout<<endl;
    }
}
