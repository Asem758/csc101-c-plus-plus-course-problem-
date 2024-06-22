#include <iostream>
using namespace std;

void display (int marks[][5])
{
    cout <<"Display marks: " <<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << marks[i][j] <<" ";
        }

        cout <<endl;
    }

}

int main()
{
    int m[2][5] = {
                     {3,6,8,9,4},
                     {11,10,5,2,7}

                  };

   display (m);

   return 0;
}
