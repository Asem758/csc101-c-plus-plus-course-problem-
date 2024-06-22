#include <iostream>
using namespace std;

int main()
{
    int i = 1;


    for (i = 1; i <= 100; i += 3)

    {
       if (i == 10)
       {
          continue;
       }

       if (i > 13)
       {
           break;
       }

       cout << i <<endl;

    }

}

