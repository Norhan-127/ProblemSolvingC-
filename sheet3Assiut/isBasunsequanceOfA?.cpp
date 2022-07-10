#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<m; i++) {
        cin>>b[i];
    }
    int check=0,counter=0;
    for (int i=0; i<n; i++) {
        if (a[i]==b[check]) {
            counter++;
            check++;
        }
    }if(counter==m) cout<<"YES\n";
    else cout<<"NO\n";
}

        
   
    
    
    
    



