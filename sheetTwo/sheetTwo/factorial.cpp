#include<iostream>
using namespace std;
int main(){
 
    int test;
    int number;
    cin>>test;
    for (int i=1;i<=test ; i++) {

    long long fact=1;
    cin>>number;
        for (int i=1; i<=number; i++) {
            fact*=i;
        
    }
    
    cout<<fact<<endl;
    }
}

