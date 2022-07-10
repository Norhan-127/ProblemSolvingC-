#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
 
    int n,counter=0,minn=INT_MAX;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
        for (int i=0; i<n; i++) {
            counter=0;
            while (arr[i]%2==0) {
                counter++;
                arr[i]/=2;
            }
            minn=min( minn,counter);
        }
    cout<<minn<<endl;
    
    
}

        
   
    
    
    
    



