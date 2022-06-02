#include<iostream>
using namespace std;
int main(){
 
    char s;
    int num,numbers;
    cin>>s>>num;
    for (int i=1; i<=num; i++) {
        cin>>numbers;
        for (int i=0; i<numbers; i++) {
            cout<<s;
        }
        cout<<endl;
        
    }
    
}


