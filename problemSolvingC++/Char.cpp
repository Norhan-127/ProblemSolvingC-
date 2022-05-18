#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    char x;
    cin>>x;
    if (x>=65 && x<=90)
        cout<<(char)(x+32)<<"\n";
    else if (x>=97 && x<=122)
        cout<<(char)(x-32)<<"\n";
    return 0;
}
