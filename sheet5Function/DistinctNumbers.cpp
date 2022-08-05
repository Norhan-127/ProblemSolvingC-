#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int arr[1004];
int distinctNum(int size){
    for (int i=0; i<size; i++) {
       cin>>arr[i];
    }
    int count=0;
    sort(arr,arr+size);
    for (int i=0; i<size; i++) {
        if (arr[i+1]!=arr[i]) {
            count++;
        }else continue;
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int size;
    cin>>size;
    cout<<distinctNum(size)<<endl;
}

//Given an array 𝐴 of size 𝑁. Print the number of distinct numbers in the array.
//3
//1 2 2
//output ----> 2
//5
//1 8 9 2 9
//output ----> 4



