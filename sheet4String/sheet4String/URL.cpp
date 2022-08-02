#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string url;
    cin>>url;
    for (int i=0; i<url.size(); i++) {
        if (url[i]=='?') {
            i++;
            for (int x=i; x<url.size(); x++) {
                if (url[x]=='=') {
                    cout<<": ";
                    continue;
                } if (url[x]=='&') {
                    cout<<endl;
                    continue;
                }cout<<url[x];
            }
        }
    }cout<<endl;
}
//http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager
//username: test
//pwd: test
//profile: developer
//role: ELITE
//key: manager

