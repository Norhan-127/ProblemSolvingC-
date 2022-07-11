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
        bool flag=false;
    int key;
    cin>>key;
        int low=0,high=size-1;
        while(low<=high){
           int mid=(low+high)/2;
        if (key==arr[mid]) {
            flag=true;
            break;
        }if(key<arr[mid]){
            high=mid-1;
        }
        else  {
            low=mid+1;
        }
        }if (flag) {
            cout<<"found\n";
            
        }else{
            cout<<"not found\n";
            
        }
        
}
    
    return 0;
}

        
   
    
