#include <iostream>
using namespace std;
bool isOdd(int n){
    if (n%2!=0) {
        return true;
    }else{
        return false;
    }
}
string toBinary(int n){
    string ans = "";
        while(n){
            ans += to_string(n%2);
            n /=2;
        }
        return ans;
}
int main() {
    int n;
    cin>>n;
    string copy=toBinary(n);
    reverse(copy.begin(), copy.end());
    if (toBinary(n)==copy && isOdd(n)) {
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
//Determine whether N is wonderful or not.
//A number is wonderful if this number is odd and its binary representation is palindrome.
//Solve this problem using two functions.
//input: 3 -----> YES
//input: 4 -----> NO

