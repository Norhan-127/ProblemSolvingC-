#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long number;
    cin>>number;
    bool flag=false;
        for (int i=2; i<=sqrt(number); i++) {
            if (number%i == 0 && number!=2) flag=true;
}
    if (number==1) {
        cout<<"NO\n";
    }else
       !flag?cout<<"YES\n":cout<<"NO\n";
    return 0;
}
