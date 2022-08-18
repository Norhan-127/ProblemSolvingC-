#include <iostream>
#include <cmath>
using namespace std;
long long sum(long long num){
    return num*(num+1)/2;
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b,x;
    cin>>a>>b>>x;
    cout<<(sum(max(a,b)/x)*x)-sum((min(a,b)-1)/x)*x<<endl;
}
//Given three numbers A, B and X. Print the summation of numbers between A and B inclusive that are divisible by X.

//step 1 Math:
//min= ?, max= ?
//step 2 :
//formula for finging summition of numbers from 1 to n
//step 3:
//finging sum(max/x)*x - sum((min-1)/x)*x
//5 20 5
//50
