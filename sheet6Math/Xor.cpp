#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b,q;
    cin>>a>>b>>q;
    //As q1,q2,q3 ---> q%3 to get modelus 3, it will return one or return two or return three
    switch (q%3) {
            //if it return one print a
        case 1:
            cout<<a<<endl;
            break;
            //if it return two print b
        case 2:
            cout<<b<<endl;
            break;
        default:
            //else
            cout <<(a^b)<<"\n";
            break;
    }
    return 0;
}
