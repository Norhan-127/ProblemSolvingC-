#include <iostream>
#include <cmath>
using namespace std;
long long equation(int x,int n){
    long long s=0;
    for (int i=2; i<=n; i+=2) {
            s+=pow(x,i);
    }return s;
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<equation(x,n)<<endl;
    
}

 
//S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)
//input -----> 5 5
//output -----. 650
