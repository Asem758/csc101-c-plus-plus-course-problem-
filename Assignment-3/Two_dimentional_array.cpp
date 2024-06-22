#include <iostream>
using namespace std;

void Function (int a, int b)
{
    int r, c;
    int n;

    cout <<"Enter the number of Row: ";
    cin >> r;

    cout <<"Enter the number of Column: ";
    cin >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % (b - a) + a;

        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] <<" ";
        }
    cout <<endl;

    }




}
int main()
{
    int n;
    int a,b;

    cout <<"Enter a lower limit: ";
    cin >> a;

    cout <<"Enter a Upper limit: ";
    cin >> b;

    Function (a,b);



}



