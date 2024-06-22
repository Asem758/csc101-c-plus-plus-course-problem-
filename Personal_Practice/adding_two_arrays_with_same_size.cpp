#include <iostream>
using namespace std;
int main() {

  int A [5] = {10, 20, 30, 40, 50} , B [5] = {1, 2, 3, 4, 5}, c [5] = {};

  for (int i = 0; i < 5; i++)
  {
      c[i] = A[i] + B[i];
  }

  for (int i = 0; i < 5; i++)
  {
      cout << c[i] <<" ";
  }

  return 0;

}
