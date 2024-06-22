#include <iostream>
using namespace std;
int main() {
    int x, y, i,sum=0;
    bool isPrime = 1;
    cout << "Enter the left range x: ";
    cin >> x;
    cout<<"Enter the right range y: ";
    cin>>y;
    while (x < y){
        isPrime = 1;
        if (x == 0 || y == 1){
            isPrime = 0;
        }
        else {
            for (i = 2; i <= x / 2; i++) {
                if (x % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if(isPrime){
            cout << x << " +";
            sum=sum+x;
        }
        x++;
    }
    cout<<"\b= "<<sum;
    return 0;
}

