#include<time.h>
using namespace std;
int main()
{
    srand(time(0));

    int arr[100];
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
       arr[i]=rand()%100;
    }

    for(int i=0;i<n;i++)
    {
       cout << arr[i] << " ";
    }
}


