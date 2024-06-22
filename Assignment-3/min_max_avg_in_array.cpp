# include <iostream>
# include <limits.h>
using namespace std;



int main ()
{
    int array [5], maxNmbr=0, minNmbr=INT_MAX, sumNmbr=0, tmpNmbr;
    float avgNmbr=0;

    for (int n = 0 ; n < 5; n++)
    {
        cout << "Enter the value: " ;
        cin >> array[n];
    }

    for (int i=0 ; i<5; i++)
    {
        maxNmbr = max(maxNmbr,array[i]);
        minNmbr = min(minNmbr,array[i]);
        sumNmbr += array[i];
    }

    avgNmbr = (float(sumNmbr)/5);

    for(int i=0;i<4;i++)
    {
        for(int j=i;j<5;j++)

        if(array[i] > array[j])
        {
            tmpNmbr = array[i];
            array[i] = array[j];
            array[j] = tmpNmbr;
        }
    }

    for(int i=0;i<5;i++)

    cout << array[i] << endl;
    cout << endl;


    cout << "The minimum value is : " << minNmbr << endl;
    cout << "The maximum value is : " << maxNmbr << endl;
    cout << "The average       is : " << avgNmbr << endl;


    return 0;
}
