#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='>')
    {
        if(a>b)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
    else if(s=='<'){
        if(a<b)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }else if(s=='='){
        if(a==b)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
    
    return 0;
}
