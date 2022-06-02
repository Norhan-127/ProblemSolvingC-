#include<iostream>
using namespace std;
int main(){
 
    short num;
    cin>>num;
    
    //outer loop for iterate numbers from 2 to n
    
    for (int i=2; i<=num; i++) {
        bool flag=false;
        
    //inner loop for test number if prime
        
        for (int j=2;j<i; j++) {
            if (i%j==0) {
                flag=true;
            }
        }
         if (!flag){
            cout<<i<<" ";
        }
    
        
    }
}

