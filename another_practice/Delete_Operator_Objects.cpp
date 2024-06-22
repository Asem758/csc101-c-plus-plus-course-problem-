#include <iostream>
using namespace std;

class student
{
    int age;

    public:

        student (): age(21) {}

        void getAge ()
        {
            cout << "Age = " << age <<endl;
        }
};

int main()
{
    student *ptr = new student ();

    ptr -> getAge();

    delete ptr;

    return 0;

}
