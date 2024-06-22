#include <iostream>
using namespace std;
int main() {

  int m;
  cout <<"Please enter your marks: ";
  cin >> m;

  if (m >= 85 && m <= 100)
  {
      cout << " A " <<endl;
  }
  else if (m >= 80 && m < 85)
  {
      cout << " A- " <<endl;
  }
  else if (m >= 75 && m < 80)
  {
      cout << " B+ " <<endl;
  }
  else if (m >= 70 && m < 75)
  {
      cout << " B " <<endl;
  }
  else if (m >= 65 && m < 70)
  {
      cout << " B- " <<endl;
  }
  else if (m >= 60 && m < 65)
  {
      cout << " C+ " <<endl;
  }
  else if (m >= 55 && m < 60)
  {
      cout << " C " <<endl;
  }
  else if (m >= 50 && m < 55)
  {
      cout << " C- " <<endl;
  }
  else if (m >= 45 && m < 50)
  {
      cout << " D+ " <<endl;
  }
  else if (m >= 40 && m < 45)
  {
      cout << " D " <<endl;
  }
  else if (m >= 0 && m < 40)
  {
      cout << " F " <<endl;
  }
  else
  {
      cout << "Otherwise you input wrong number " <<endl;
  }
  return 0;

}
