#include <iostream>
using namespace std;
int main(){
    
    string str,res;
    getline(cin, str);
    int count=0;
    for (int i=0; i<str.length(); i++) {
        if (str[i]!=32 && str[i]!='!' &&str[i]!='?' && str[i]!='.' && str[i]!=',') {
            res+=str[i];
        }
        if ((str[i]==32 || str[i]=='!' || str[i]=='?' || str[i]=='.' || str[i]==',' || i==str.length()-1) && res.size()!=0) {
            count++;
            res="";
        }
    }
    cout<<count<<endl;
    
}
