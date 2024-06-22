#include <iostream>
using namespace std;
int main() {

  int a;
  cout <<"Please enter your age: ";
  cin >> a;

  if (a >= 0 && a < 3)
  {
      cout << " Infancy " <<endl;
  }
  else if (a >= 3 && a < 12)
  {
      cout << " Childhood " <<endl;
  }
  else if (a >= 12 && a < 20)
  {
      cout << " Adolescence " <<endl;
  }
  else if (a >= 20 && a < 40)
  {
      cout << " Young adulthood " <<endl;
  }
  else if (a >= 40 && a < 65)
  {
      cout << " Mature adulthood " <<endl;
  }
  else if (a >= 65 && a != 0)
  {
      cout << " Late adulthood " <<endl;
  }
  else
  {
      cout << " No more " <<endl;
  }
  return 0;

}
