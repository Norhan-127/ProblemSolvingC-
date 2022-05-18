#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    int a;
    cin>>a;
    int num=a/1000;
    if(num%2==0)
        cout<<"EVEN\n";
    else
        cout<<"ODD\n";
    

    return 0;
}
