#include <iostream>
using namespace std;
int arr[10005];
void shiftRight(int n,int x,int arr[10005]){
    short numOfShift=(x%n);
    for (int i=n-numOfShift; i<n; i++) {
        cout<<arr[i]<<" ";
    }for(int i=0;i<n-numOfShift;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n>>x;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    shiftRight(n,x,arr);
    cout<<endl;
}
//if 𝐴 = [1, 2, 3] then after shifting it to the right for 1 time 𝐴 = [3, 1, 2].
//5 21
//1 2 3 4 5
//5 1 2 3 4

