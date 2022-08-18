#include <iostream>
#include <cmath>
using namespace std;
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b;
//    ans=0;
    cin>>a>>b;
//    for (long long i=max(a,b); i>=sqrt(max(a,b)); i--) {
//        if (a%i==0 && b%i==0) {
//            ans = i;
//            break;
//        }
//    }cout<<ans<<" ";
    cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
    cout<<8%12<<endl;
    return 0;
}
//the least common multiple, lowest common multiple, or smallest common multiple of two integers a and b, usually denoted by lcm(a, b), is the smallest positive integer that is divisible by both a and b
//method of finding the LCM of two numbers is to use the LCM and GCD formula. This formula specifies that the product of two numbers is equal to the product of their LCM and GCD.
//a * b = GCD * LCM
//GCD is the greatest common divisor of A and B.
//LCM is the least common multiple of A and B.
