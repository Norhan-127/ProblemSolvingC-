#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    long long a,b,c,num1=0,num2=0,num3=0;
    cin>>a>>b>>c;
    if(a<=b&&a<c){
        num1=a;
        if (b<c) {
            num2=b;
            num3=c;
        }
        else{
            num2=c;
            num3=b;
        }
    }
    else if (b<a&&b<=c){
        num1=b;
        if (c<a) {
            num2=c;
            num3=a;
        }
        else{
            num3=c;
            num2=a;
        }
    }
    else if(c<=a && c<b){
        num1=c;
        if (a<b) {
            num2=a;
            num3=b;
        }
        else{
            num3=a;
            num2=b;
        }
    }
    else
        num1=a,num2=b,num3=c;
    cout<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}
