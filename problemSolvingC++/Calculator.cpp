#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    int a,b;
    char operation;
    cin>>a>>operation>>b;
    if (operation=='+') {
        cout<<a+b<<"\n";
    }
    else if (operation=='-'){
        cout<<a-b<<"\n";
    }else if (operation=='*'){
        cout<<a*b<<"\n";
    }
    else if (operation=='/'&&b!=0){
        cout<<a/b<<"\n";
    }
    return 0;
}
