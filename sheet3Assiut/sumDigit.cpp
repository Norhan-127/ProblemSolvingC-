#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,sum=0;
    cin>>n;
    char arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=(int)arr[i]-'0';
    }
    cout<<sum<<endl;
}
