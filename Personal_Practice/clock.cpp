#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    time_t hold_time;
    hold_time = time (NULL);

    cout <<"The date is: " << ctime (&hold_time);
}
