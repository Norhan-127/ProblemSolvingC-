#include <iostream>

using namespace std;
 
int main(int argc, const char * argv[]) {
     
    long num1,num2;
    cin>>num1>>num2;
    if(num2%num1==0 || num1%num2==0){
        cout<<"Multiples\n";
    }
    else
        cout<<"No Multiples\n";
    
    return 0;
}
