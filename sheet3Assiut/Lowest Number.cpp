#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
  
    int n,index=0;
    cin>>n;
    int arr[n],mini=INT_MAX;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        if (arr[i]<mini) {
            mini=arr[i];
            index=i;
        }
    }cout<<mini<<" "<<index+1<<endl;
  
  
    return 0;
}
