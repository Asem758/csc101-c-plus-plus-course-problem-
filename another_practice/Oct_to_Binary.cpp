#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int octNum, rev = 0, rem, chk = 0;
    char binaryNum[20] = " ";

    cout << "Enter the Octal Number: ";
    cin >> octNum;

    while (octNum != 0)
    {
        rem = octNum % 10;
        if (rem > 7)
        {
            chk++;
            break;
        }

        rev = (rev * 10) + rem;
        octNum = octNum / 10;
    }

    if (chk == 0)
    {
        octNum = rev;

        cout << "\nEquivalent Binary Value: ";

        while (octNum != 0)
        {
            rem = octNum % 10;

            switch (rem)
            {
                        case 0:
                               strcat (binaryNum, "000");
                               break;

                        case 1:
                               strcat (binaryNum, "001");
                               break;

                        case 2:
                               strcat (binaryNum, "010");
                               break;

                        case 3:
                               strcat (binaryNum, "011");
                               break;

                        case 4:
                               strcat (binaryNum, "100");
                               break;

                        case 5:
                               strcat (binaryNum, "101");
                               break;

                        case 6:
                               strcat (binaryNum, "110");
                               break;

                        case 7:
                               strcat (binaryNum, "111");
                               break;


            }

            octNum = octNum / 10;
        }

        cout << binaryNum;
    }

    else
    {
        cout << "\nInvalid Octal digit! ";
    }

    cout <<endl;
    return 0;
}
