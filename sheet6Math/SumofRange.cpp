#include <iostream>
#include <cmath>
using namespace std;
//sum of odd numbers from 1 to given number n
long long sumOddFun(long long n){
    long long res=(n+1)/2;
    long long finalRes=res*res;
    return  finalRes;
}
long long sumEvenFun(long long n){
    long long res=(n+1)*n;
    return  res;
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b;
    cin>>a>>b;
//    long long sum=0;
//    for (long long i=min(b,a); i<=max(a, b); i++) {
//        sum+=i;
//        i%2==0?sumEven+=i : sumOdd+=i;
//    }
//    cout<<sum<<endl;
    
    cout<<sumEvenFun(max(a, b)/2)-sumEvenFun((min(b,a)-1)/2)+sumOddFun(max(a, b))-sumOddFun(min(b,a)-1)<<endl;
    //getting the sum of even numbers from 0 to the maximum number & the sum of even numbers from 1 to the minimum number after removing the minimum number itself form this summition & substract the result
    cout<<sumEvenFun(max(a, b)/2)-sumEvenFun((min(b,a)-1)/2)<<endl;
    //getting the sum of odd numbers from 1 to the maximum number & the sum of odd numbers from 1 to the minimum number after removing the minimum number itself form this summition & substract the result
    cout<<sumOddFun(max(a, b))-sumOddFun(min(b,a)-1)<<endl;
}
