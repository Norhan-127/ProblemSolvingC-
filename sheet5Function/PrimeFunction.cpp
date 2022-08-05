#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int number){
    bool flag=false;
    for (int i=2; i<=sqrt(number); i++) {
        if (number%i == 0 && number!=2) {
            flag=true;
        }
    }if(!flag){
        return true;
    }else {
        return false;
    }
}
int main(){
    int test;
    cin>>test;
    while (test--) {
        int n;
        cin>>n;
        if (n==1) {
            cout<<"NO";
        }else{
        if (isPrime(n)) {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        }cout<<endl;
    }
    
}


