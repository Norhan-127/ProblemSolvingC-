#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cin>>n;
    int a[n],b[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for (int i=0; i<n; i++) {
        if (a[i]!=b[i]) {
            cout<<"no";
            return 0;
        }
    }cout<<"yes";
    
}

        
   
    
    
    
    



