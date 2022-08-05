#include <iostream>
#include <vector>
using namespace std;
int arr[1004];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> vect;
    int size;
    cin>>size;
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<size; i++) {
        if (arr[i]!=0) {
            cout<<arr[i]<<" ";
        }else{
                vect.push_back(arr[i]);
        }
    }for(int i=vect.size()-1;i>0;i--){
        cout<<vect.at(i)<<" ";
    }
    cout<<0<<endl;
}
//Print the array elements after shifting all zeroes in array 𝐴 to the right.
//4
//2 0 0 5
//output -----> 2 5 0 0

