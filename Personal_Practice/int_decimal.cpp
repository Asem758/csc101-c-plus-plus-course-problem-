#include<iostream>
using namespace std;
int main(){
  int sum= 0;
  for(int i=1; i<=5; ++i){
    if(i<5){
      sum+= i;
      cout<<i<<'+';
    }
    else{
        sum+= i;
        cout<<i<<'=';
    }
  }
    cout<<sum<<endl;
    return 0;
}
