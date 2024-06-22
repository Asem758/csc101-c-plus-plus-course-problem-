#include <iostream>

#include <math.h> //for pow() function

#include <stdlib.h> //for exit() function

using namespace std;

long int factorial(int p) //factorial function

{

     if (p > 1)

          return p * factorial(p - 1);

     else

          return 1;

}

float cosX(int x, int n)

{

     int flag = 1, i = 0, p = 2;

     float result = 1.0; //first term is 1

     for (i = 1;i<n;i++) //repeating while loop

     {

          if (flag) //if negative term

          {

              result -= pow(x, p) / factorial(p); //subtraction term

              flag = 0; //reset flag to 0 for next term

          }

          else //if positive term

          {

              result += pow(x, p) / factorial(p); //addition term

              flag = 1; //reset flag to 1 for next term

          }

          p += 2; //increment power by 2

     }

     return result; //return final result

}


int main()

{

     int x, n, choice;

     cout << "Enter X in degrees ";

     cin >> x; //input X

     cout << "Enter n for no.of terms : ";

     cin >> n; //input n terms

     cout << "\nEnter your choice(1-CosX, 2-SinX, 3-Exit) : ";

     cin >> choice; //input choice of menu

     switch (choice) //check by switch

     {

     case 1:

          cout << "\nCos " << x << " is : " << cosX(x, n); //call cosX function

          break;


     case 3:

          exit(0); //stop the program

          break;

     default:

          cout << "\nInvalid choice.."; //if choice is invalid

     }

     system("pause");

     return 0;

}
