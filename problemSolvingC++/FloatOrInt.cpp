#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    float x;
    cin>>x;
    int y=(int)x;
    if(x-y>0)
        cout<<"float "<<y<<" "<<x-y<<"\n";
    else
        cout<<"int "<<y<<"\n";
    
    return 0;
}
