#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int test,n;
    cin>>test;
    while (test--) {
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        for (int i = 0 ; i<n ; i++  ){
               cout << arr[i] << " " ;
     }
        //outer loop take one element and compare it with all other following elements
        for (int i=0; i<n; i++) {
            int maxx=arr[i];
            //inner loop iterate all elements
            for (int j=i+1; j<n; j++) {
                maxx=max(maxx,arr[j]);
                cout<<maxx<<" ";
            }
        }cout<<endl;
   }
}

        
   
    
    
    
    



