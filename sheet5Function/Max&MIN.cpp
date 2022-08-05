#include <iostream>
#include <cmath>
using namespace std;

int arr[100005];
void maxMini(int arr[100005],int n){
    int maxx=arr[0],mini=arr[0];
    for (int i=0; i<n; i++) {
        maxx= max(maxx,arr[i]);
        mini= min(mini,arr[i]);
        }
    cout<<mini<<" "<<maxx<<endl;
}

int main(){

    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    maxMini(arr, n);
}


