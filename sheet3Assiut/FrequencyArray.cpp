#include <iostream>
using namespace std;
const int N=10e5+5;
int freq[N]={0};
int main(int argc, const char * argv[]) {
    
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for (int i=1; i<=m; i++) {
     
            cout<<freq[i]<<endl;
    }
    
}

        
   
    
    
    
    



