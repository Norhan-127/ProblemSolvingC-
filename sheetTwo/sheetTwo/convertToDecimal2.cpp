#include<iostream>
#include <cmath>
using namespace std;
int main(){
 
    int t;
    cin>>t;
    while (t--) {
        int n=0,counter=0;
        cin>>n;
        while (n!=0) {
            int digit=n%2;
            if (digit==1) {
                counter++;
            }
            n/=2;
        }
        int p=0,decimal=0;
        
       /* while (counter--) {
                decimal+=(1*pow(2,p));
                p++;
            }*/
        for (int i=0; i<counter; i++) {
            decimal+=pow(2,i);
        }
        cout<<decimal<<endl;
        
    }
    
}


