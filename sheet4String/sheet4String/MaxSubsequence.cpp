#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
  
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0,maxx=INT_MIN;
    for (int i=0; i<n; i++) {
        if (s[i]!=s[i+1]) {
            count++;
        }
        maxx=max(maxx, count);
    }cout<<maxx<<endl;
   
    
}
