#include <iostream>
#include <cstdlib>
using namespace std;

float area (float r)
{
    return (3.14 * r * r);
}

float area (float b, float h)
{
    return (0.5 * b * h);
}

float area_A (float l, float b)
{
    return (l * b);
}

int main()
{
    float b,h,r,l;
    int ch;

    do
    {
        cout <<"\n\n  *****Menu****  \n ";
        cout <<"\n 1. Area of Circle ";
        cout <<"\n 2. Area of triangle ";
        cout <<"\n 3. Area of rectangle ";
        cout <<"\n 4. Exit ";

        cout <<"\n\n Enter your choice: ";
        cin >> ch;

        switch ch
        {
                  case 1:
                  {
                        cout <<"\n Enter the radius of circle: ";
                        cin >> r;

                        cout <<"\n Area of circle: " << area (r);
                        break;
                  }

                  case 2:
                  {
                        cout <<"\n Enter the Base & Height of Triangle: ";
                        cin >> b >> h;

                        cout <<"\n Area of triangle: " << area (b,h);
                        break;
                  }

                  case 3:
                  {
                        cout <<"\n Enter the length & breadth of rectangle: ";
                        cin >> l >> b;

                        cout <<"\n Area of rectangle: " << area_A (l,b);
                        break;
                  }

                  case 4:

                        exit (0);

                  default:

                        cout <<"\n  Invalid Choice.... ";
        }

    }

    while (ch != 4);

    return 0;
}
