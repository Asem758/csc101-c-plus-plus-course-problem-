#include<iostream>
#include<cmath>


using namespace std;


double cosine(double angle);
long factorial(long n);


int main()
{

    double angle;


    cout << "For cos(x) enter the value x: ";
    cin >> angle;


    cout << "The calculated cosine of " << angle << " is " << cosine(angle) << endl;
    cout << "The C++ cosine of " << angle << " is " << cos(angle) << endl;


    system("PAUSE");
    return 0;
}

double cosine(double angle)
{

    double x=0;
    double i;


    for (i=2; i<=8; i+=2)
    {
        if (i==4 || i==8)
        {
         x = x + pow(angle, i)/factorial(i);
        }
        else
        {
         x = x - pow(angle, i)/factorial(i);
        }
    }

    return 1+x;
}

long factorial(long n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
    return (n * factorial(n-1));
    }
}
