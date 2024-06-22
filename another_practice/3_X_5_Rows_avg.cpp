#include <iostream>
using namespace std;

int main()
{
    int A[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> A[i][j];
        }
    }

    cout <<endl<<endl<<"Matrix A= \n";

    for (int i = 0; i < 3; i++)
    {

        float avg = 0;

        for (int j = 0; j < 5; j++)
        {
            avg+= A[i][j];
        }

        cout <<"Row: " << i <<" Average: " << avg / 5;

        cout <<endl;
    }
}
