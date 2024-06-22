#include <iostream>
using namespace std;

void circle (int radius)
{
    cout << "Perimeter is: " << 2*3.14*radius <<endl;
    cout << "Area is: " << 3.14*radius*radius <<endl;
}

int main()
{
    circle (4);
    return 0;
}
