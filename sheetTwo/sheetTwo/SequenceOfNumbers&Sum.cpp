#include<iostream>
#include <cmath>
using namespace std;
int main(){
 
    short num1,num2,sum=0;
    while (1) {
    cin>>num1>>num2;
    int mx=INT_MIN,mini=INT_MAX;
        if(num1<=0||num2<=0){
            break;
        }
    mx=max(num1,num2);
    mini=min(num1,num2);
    for (int i=mini; i<=mx&&i>0; i++) {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    sum=0;
    }
   
}


