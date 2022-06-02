#include<iostream>
using namespace std;
int main(){
 
    int n,a,b,sum=0;
    cin>>n>>a>>b;
    for (int i=1; i<=n; i++) {
            if(i/10==0){
                if (i>=a&&i<=b)
                    sum+=i;
            }else{
                int num=i;
                int mySum=0;
                for (int j=0;j<n;j++) {
                    int digit=num%10;
                    mySum+=digit;
                    num/=10;
                }if(mySum>=a && mySum<=b){
                    sum+=i;
                }
                
            }
    }cout<<sum<<endl;
}

