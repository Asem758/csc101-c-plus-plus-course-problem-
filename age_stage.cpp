#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Input your age range"<<endl;
    cin>>x;

  if(x<=3) <<endl;
  {
      cout<<"infancy"<<endl;
  }
  else if(x>=3 && x<=12)
  {
      cout<<"childhood"<<endl;
  }
  else if(x>=12 && x<=20)
  {
      cout<<"Adolescence"<<endl;
  }
  else if(x>=20 && x<=40)
  {
      cout<<"Young adulthood"<<endl;
  }
  else if(x>=40 && x<=65)
  {
      cout<<"Late adulthood"<<endl;
  }
  else
  {
      cout<<"You are died"<<endl;
  }
  return 0;
}
