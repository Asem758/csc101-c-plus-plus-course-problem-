#include  <iostream>
using namespace std;
#define   m  4
#define   n  5
int main()
{
   int i, j, total = 0;
   // a 4x5 or [4][5] array variable...
   int q[m][n]={{4,5,6,2,12},{10,25,33,22,11},
                 {21,32,43,54,65},{3,2,1,5,6}};
   float average;
   // the outer for
   for(i=0; i < m; i++)
          // the inner for loop, for every row, read column by column
          for(j=0; j < n; j++)
          // the get the summation of the array elements.
          {
                 // the display the array...
                 cout<<"q["<<i<<"]["<<j<<"] = "<<q[i][j]<<endl;

                 total = total + q[i][j];
          }
   // calculate the average, notice the simple typecast casted from int to float...
   average = (float)total/(float) (m*n);

   cout<<"Average = " <<total <<"/" << m*n <<endl;

   cout<<"\n The Average = " <<average <<endl;

   return 0;
}
