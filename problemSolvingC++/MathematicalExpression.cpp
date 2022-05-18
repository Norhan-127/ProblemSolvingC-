#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    
    
    int a,b,c;
    char q,s;
    cin>>a>>s>>b>>q>>c;
    
    if(s=='+'){
        if((a+b)==c)
            cout<<"Yes\n";
        else
            cout<<a+b<<endl;
    }if(s=='-'){
        if((a-b)==c)
            cout<<"Yes\n";
        else
            cout<<a-b<<endl;
    }if(s=='*'){
        if((a*b)==c)
            cout<<"Yes\n";
        else
            cout<<a*b<<endl;
    }
    
    
    return 0;
}
