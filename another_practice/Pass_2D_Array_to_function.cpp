#include <iostream>
using namespace std;

void display (int n[][2])
{
    cout << "Displaying Values: " <<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << n[i][j] <<endl;
        }
    }

}

int main()
{
    int num[3][2] = {
                     {9, 10},
                     {19, 22},
                     {23, 1}

                    };

  display (num);

  return 0;
}
