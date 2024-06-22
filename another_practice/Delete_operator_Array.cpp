#include <iostream>
using namespace std;

int main()
{
    int num;

    cout <<"Total number of Students: ";
    cin >> num;

    float *ptr;

    ptr = new float[num];

    cout << "Enter GPA of Students " <<endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 <<" : ";
        cin >> *(ptr + i);
    }

    cout << "\Displaying GPA Students " <<endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << " : " << *(ptr + i) <<endl;
    }

    delete[] ptr;

    return 0;
}
