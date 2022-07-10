#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int size,q;
    cin>>size>>q;
    long long arr[size];
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+size);
    while (q--) {
    int key;
    cin>>key;
        int low=0,high=size-1;
        while(low<=high){
           int mid=(low+high)/2;
        if (key==arr[mid]) {
            cout<<"found\n";
          //  return 0;
        } else if(key<arr[mid]){
            high=mid-1;
        }
        else if(key>arr[mid]) {
            low=mid+1;
        }else cout<<"not found\n";
    }
        
}
    
    return 0;
}

        
   
    
    
    
    



