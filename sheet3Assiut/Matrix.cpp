#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
 
    int n,pSum=0,sSum=0,diff;
    cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for (int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0,j=0;i<n;i++,j++){
            sSum+=arr[i][j];
    }
    for (int i=0,j=n-1; i<n; i++,j--) {
        pSum+=arr[i][j];
    }
    cout<<abs(sSum-pSum)<<endl;
}

        
   
    
    
    
    


