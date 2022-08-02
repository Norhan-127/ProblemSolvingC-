#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
          string s;
          cin>>s;
          int n=s.size();
          int ls=0,rs=0,lst=0;
          vector<string>ans;
          for(int i=0;i<n;i++){
            if(s[i]=='L') ls++;
            else  rs++;
            if(ls==rs){
                ls=0;
                rs=0;
                string x="";
                for(int j=lst;j<=i;j++) x+=s[j];
                ans.push_back(x);
                lst=i+1;
            }
          }
          cout<<ans.size()<<"\n";
          for(int i=0;i<ans.size();i++) cout<<ans[i]<<"\n";
         return 0;
}
//LLRRRLLRR
//3
//LLRR
//RL
//LR
