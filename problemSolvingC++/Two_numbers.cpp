#include <iostream>
#include <cmath>
using namespace std;
 
int main(int argc, const char * argv[]) {
    
    double a,b;
    cin>>a>>b;
    cout<<"floor "<<a <<" / "<< b <<" = "<<floor(a/b)<<"\n";
    cout<<"ceil "<<a <<" / "<< b <<" = "<<ceil(a/b)<<"\n";
    cout<<"round "<<a <<" / "<< b <<" = "<<round(a/b)<<"\n";
    
    return 0;
}
