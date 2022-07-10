#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int test,n;
    cin>>test;
    while (test--) {
        cin>>n;
        int arr[n];
        int count=n;
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (arr[j-1] <= arr[j]) {
                   count++;
                }else break;
            }
        }cout<<count<<endl;
   }
    
}

        
   
    
    
    
    



