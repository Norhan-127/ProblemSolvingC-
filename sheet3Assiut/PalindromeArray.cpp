#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    bool flag =false;
    for (int i=0; i<n; i++) {
        if (arr[i]==arr[n-1-i]) {
            flag=true;
        }else{
            flag=false;
            break;
        }
    }
    if (flag) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
