#include <iostream>
using namespace std;
void nTimes(int n,char c){
    while (n--) {
        cout<<c<<" ";
    }cout<<endl;
}
int main() {
    int t;
    cin>>t;
    int num;
//    cin>>num;
    char c;
//    cin>>c;
    while (t--) {
        cin>>num;
        cin>>c;
        nTimes(num, c);
    }
}


