#include<iostream>

using namespace std;
int main(){
    int test;
    cin>>test;
    int num;
    for(int i=1;i<=test;i++){
    cin>>num;
        if (num==0) {
            cout<<0;
        }
        while(num!=0) {
            cout<<num%10<<" ";
            num/=10;
            
        }cout<<endl;
    }
    return 0;
}


