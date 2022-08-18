#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long number;
    cin>>number;
    (ceil(log2(number)) == floor(log2(number)))?cout<<"YES\n":cout<<"NO\n";
    return 0;
}
