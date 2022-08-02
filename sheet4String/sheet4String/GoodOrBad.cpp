#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    string s;
    while (t--) {
        cin>>s;
        int x=s.find("010");
        int y=s.find("101");
        if (x!=string::npos || y!=string::npos) {
            cout<<"Good\n";
        }else{
            cout<<"Bad\n";
        }
    }
    
}
/*
 #include<iostream>
 using namespace std;
 int main() {

  int cases;
  cin>>cases;
  while(cases--){
  
   string str;
   cin>>str;
  
   int flag = 0;
 //loop starts from index 1 ... second element
   for(int i=1 ; i<str.size() ; i++){
   
    if(str[i]-'0' == 1){
     if(str[i-1]-'0'==0 && str[i+1]-'0'==0){
      flag=1;
      break;
     }
    }
    else if(str[i]-'0' == 0){
     if(str[i-1]-'0'==1 && str[i+1]-'0'==1){
      flag=1;
      break;
     }
    }
   }
   if(flag == 1){
    cout<<"Good"<<endl;
   }else{
    cout<<"Bad"<<endl;
   }
  }
 }
*/
    



