#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,mini=INT_MAX,mx=INT_MIN;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        mx=max(mx,arr[i]);
    }
    for (int i =0; i<n; i++) {
        if (arr[i]==mini) {
            arr[i]=mx;
        }else if (arr[i]==mx){
            arr[i]=mini;
        }cout<<arr[i]<<" ";
    }
        
    cout<<endl;
    
    
    
    
}
