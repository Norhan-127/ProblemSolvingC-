#include <iostream>
#include<iomanip>
using namespace std;
 
int main(int argc, const char * argv[]) {
    
    const double  pi=3.141592653;
    double r=1;
    cin>>r;
    cout<<fixed<< setprecision(9)<<pi*r*r<<"\n";
    return 0;
}
