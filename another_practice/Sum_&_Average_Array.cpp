#include <iostream>
using namespace std;

int main()
{
    double numbers[] = {7,5,6,20,35,27};

    double sum = 0;
    double count = 0;
    double avg;

    cout <<"The numbers are: ";

    for (const double &n : numbers)
    {
        cout << n <<" ";

        sum += n;

        count++;
    }

    cout <<"\nTheir sum: " << sum;

    avg = sum / count;

    cout <<"\nTheir average: " << avg <<endl;

    return 0;
}
