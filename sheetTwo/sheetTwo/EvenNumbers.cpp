
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int num;
    cin>>num;
    for(int i=2;i<=num;i+=2){
        cout<<i<<endl;
    }if(num==1)cout<<-1<<endl;
    
    return 0;
}
