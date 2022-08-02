#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int q;
    cin>>q;
    string s;
    cin>>s;
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for (int i=0; i<s.size(); i++) {
        for(int j=0;j<key.size();j++){
        if (q==1) {
            if (s[i]==Original[j]) {
                cout<<key[j];
            }else continue;
        }if (q==2) {
            if (s[i]==key[j]) {
                cout<<Original[j];
            }else continue;
        }
    }
    }cout<<endl;
    
    
}
//If 𝑄 is equal to 1 then print 𝑆 after encrypting it otherwise, print 𝑆 after decrypting it.
//Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/".
//Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".
//1
//In Encryption: For each letter 𝑥 in "Original" replace it by the equivalent letter 𝑦 from "Key"
//2
//In Decryption: For each letter 𝑦 in "Key" replace it by the equivalent letter 𝑥 from "Original".

//1
//Egypt
//ZaoQR

//2
//#@_!=.+-*/
//0123456789

//2
//ZaoQR
//Egypt


