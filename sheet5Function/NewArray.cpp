#include <iostream>
using namespace std;
int arrA[1003];
int arrB[1003];
void concat(int n,int arr1[1003],int arr2[1003]){
    for (int i=0; i<n; i++) {
        cout<<arr2[i]<<" ";
    }for (int i=0; i<n-1; i++) {
        cout<<arr1[i]<<" ";
    }cout<<arr1[n-1];
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arrA[i];
    }for (int i=0; i<n; i++) {
        cin>>arrB[i];
    }
    concat(n, arrA, arrB);
    cout<<endl;
}

//Given two arrays 𝐴 and 𝐵 of size 𝑁 Print a new array 𝐶 that holds the concatenation of array 𝐵 followed by array 𝐴
//2
//1 2
//3 4
//output ----> 3 4 1 2



