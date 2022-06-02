#include<iostream>
using namespace std;
int main(){
 
    int num;
    cin>>num;
    bool flag=false;
    for (int i=2; i<num; i++) {
        if (num%i==0) {
            flag=true;
            break;
        }
    }
    if (!flag) {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    
}

