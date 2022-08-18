#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long num;
    cin>>num;
    cout<<(long long)(-1 + sqrt(1+8*num))/2<<endl;
    return 0;
}
//Input: N = 5
//Output: 2
//5 can be represented as 1 + 4, 2 + 3, 3 + 2, 4 + 1 and 5.
//So maximum integers that can be used in the representation are 2.
//
//Input: N = 10
//Output: 4
//Approach: We can always greedily choose distinct integers to be as small as possible to maximize the number of distinct integers that can be used. If we are using the first x natural numbers, let their sum be f(x).
//So we need to find a maximum x such that f(x) < = n
    
    
//We can solve the above equation by using quadratic formula X = (-1 + sqrt(1+8*n))/2.
