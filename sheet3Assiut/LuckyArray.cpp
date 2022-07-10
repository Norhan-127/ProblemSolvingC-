#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,arr[1000],mini=INT_MAX,count=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        if (arr[i]<mini) {
            mini=arr[i];
        }
    }for(int i=0;i<n;i++){
        if (mini==arr[i]) {
            count++;
        }
    }
    if(count%2!=0){
        cout<<"Lucky"<<endl;
    }else
        cout<<"Unlucky"<<endl;
}
    

