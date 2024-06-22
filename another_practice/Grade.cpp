#include <iostream>
using namespace std;
int main() {

  char grade = 'A';
  if(grade == 'A')
  {
      cout <<"Excellent ! " <<endl;
  }
  else if(grade == 'B')
  {
      cout <<"Outstanding ! " <<endl;
  }
  else if(grade == 'C')
  {
      cout <<"Good ! " <<endl;
  }
  else if(grade == 'D')
  {
      cout <<"Can do better " <<endl;
  }
  else if(grade == 'E')
  {
      cout <<"Just passed " <<endl;
  }
  else if(grade == 'F')
  {
      cout <<"You are failed " <<endl;
  }
  else
  {
      cout <<"Invalid grade " <<endl;
  }
  return 0;

}
