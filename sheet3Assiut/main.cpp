#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    cin>>n;
    int arr[n];
    long long sum=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        sum+=arr[i];
    }
    if(sum<0){
        sum*=-1;
        cout<<sum<<endl;
    }
    else
        cout<<sum<<endl;
    return 0;
}
