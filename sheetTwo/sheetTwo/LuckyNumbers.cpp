#include<iostream>
using namespace std;
int main(){
 
    int a,b;
    int count=0;
    cin>>a>>b;
    bool flag=false;
    for (int i=a; i<=b; i++) {
        bool flag=false;
        int copy =i;
        while(copy!=0){
            
            short digit=copy%10;
            copy/=10;
            
            if (digit!=7 && digit!=4) {
                flag=true;
            }
            
        }
        if (flag==0) {
            cout<<i<<" ";
            count++;
        }
    }
    if (count==0) {
        cout<<-1<<endl;
    }
    
}

