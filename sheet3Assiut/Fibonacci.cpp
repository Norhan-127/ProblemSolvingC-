#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
 
    long long arr[51];
    int n;
    cin>>n;
    arr[1]=0;
    arr[2]=1;
    for (int i=3; i<51; i++ ) {
        arr[i]=arr[i-1]+arr[i-2];
    }
   cout<<arr[n]<<endl;
}

        
   
    
    
    
    

