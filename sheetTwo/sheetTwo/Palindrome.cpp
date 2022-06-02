#include<iostream>
using namespace std;
int main(){
 
    int num,result=0;
    cin>>num;
    int copy=num;
    while (copy) {
        result+=copy%10;
        result*=10;
        copy/=10;
    }
    //cout<<result/10<<endl;

    if (result/10==num) {
        cout<<result/10<<endl<<"YES\n";
    }
    else
        cout<<result/10<<endl<<"NO\n";
}

