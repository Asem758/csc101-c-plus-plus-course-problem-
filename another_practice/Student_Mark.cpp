#include <iostream>
using namespace std;

void display (int marks[5]);

int main()
{
    int marks[5] = {7,9,5,4,8};
    display (marks);
    return 0;
}

void display (int m[5])
{
    cout <<"Displaying marks: " <<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Student: " << i + 1 << ": " << m[i] <<endl;
    }
}
