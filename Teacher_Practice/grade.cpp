#include <iostream>
using namespace std;
int main() {

  int m;
  cout <<"Enter the grade: ";
  cin >> m;

  if(m>80  && m<= 100)
  {
      cout <<'A' <<endl;
  }
  else if(m>50  &&  m<= 80)
  {
      cout <<'B' <<endl;
  }
  else if(m>0  && m<=50)
  {
      cout <<'F' <<endl;
  }
  else
  {
      cout <<"You are fail " <<endl;
  }

  return 0;

}
