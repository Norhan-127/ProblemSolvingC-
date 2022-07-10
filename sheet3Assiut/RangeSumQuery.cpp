#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int size,query,l,r;
    cin>>size>>query;
    long long arr[size],arr2[size];
    for (int i=0; i<size; i++) {
        cin>>arr[i];
        if(i==0){
            arr2[i] =arr[i];
        }else{
            arr2[i] = arr[i] + arr2[i-1];
        }
       // cout<<arr2[i]<<" ";
    }
    while (query--) {
        cin>>l>>r;
        l--;
        r--;
        long long sum=0;
        sum+=arr2[r]-arr2[l]+arr[l];
        cout <<sum<<endl;
    }
    return 0;
}

        
   
    
    
    
    



