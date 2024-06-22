#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<< "Input first Side:";
    cin>> x;
    cout<< "Input Second Side:";
    cin>> y;
    cout<< "Input Third Side:";
    cin>> z;

    if (x==y && x==z && y==z)
    {
        cout<<"Triangle is Equilateral triangle"<<endl;
    }

    else if (x!=y && x!=z && y!=z)
    {
        cout<<"Triangle is Scalene triangle"<<endl;
    }
    else
    {
        cout<< "Triangle is Isosceles triangle"<<endl;
    }

    return 0;
}

