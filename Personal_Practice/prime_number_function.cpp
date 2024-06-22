include <iostream>
using namespace std;

  bool CheckForPrime (int num)
  {
      bool numIsPrime = true;

      for (int j = 2; j < num; j++)
      {
         if (num % j == 0)
            numIsPrime = false;
      }

         if (numIsprime == 0)
            return true;

         else
            return false;
  }


  int main()
  {
      int array [7] = {7, 2, 3, 4, 8, 14, 13}
      int count = 0;

      for (int i = 0; i < 7; i++)
      {
          int val = CheckForPrime (array[i])

          if (val == 1)
          {
              count = count + 1;
          }
      }

      cout <<"Number of Prime: " << count <<endl;

      return 0;
  }
