#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,key=-1;
    bool flag=false;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>key;
    for (int i=0; i<n; i++) {
        if(key==arr[i]){
            flag=true;
            key=i;
            break;
        }
    }if(flag) cout<<key<<endl;
    else cout<<-1<<endl;
    return 0;
}
