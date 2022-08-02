#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
   
    for (int i=0;i<s.size(); i++) {
       if(s.substr(i,5)=="EGYPT") {
                cout<<" ";
                i+=4;

        }else cout<<s[i];
    }cout<<endl;
}
//BRITISHEGYPTGHANA
//BRITISH GHANA

//ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
//ITALYKOREA  ALGERIA Z

