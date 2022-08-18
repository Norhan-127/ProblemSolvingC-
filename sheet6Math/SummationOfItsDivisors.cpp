#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long num;
    cin>>num;
    long long sum=0;
    for (int i=1; i<=sqrt(num); i++) {
        if(num%i==0) {
            sum+=i;
        if (i!=sqrt(num)) sum+=num/i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
