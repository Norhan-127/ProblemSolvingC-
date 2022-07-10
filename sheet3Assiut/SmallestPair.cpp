#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int t,n,x;
    cin>>t;
    while(t--){
    int mini=INT_MAX;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<=n-1; j++) {
                if (i<j) {
                   x=arr[i]+arr[j]+(j+1)-(i+1);
                  //  cout<<x<<" "<<endl;
                    if (x<mini) {
                        mini=x;
                    }
                }
            }
        }cout<<mini<<endl;
}
    return 0;
}

