#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int score=0;
    for (int i =0; i<str.size(); i++) {
        char c=str[i];
        switch (c) {
            case 'V':
                score+=5;
                break;
            case 'W':
                score+=2;
                break;
            case 'Z':
                if (i!=str.length()-1){
                if (str[i+1]=='W') {
                    score/=2;
                    str[i+1]='0';
                }else if (str[i+1]=='V'){
                    score/=5;
                    str[i+1]='0';
                }
                }
                break;
            case 'Y':
                if (i!=str.length()-1){
                str.push_back(str[i+1]);
                    str[i+1]='0';
                }
                break;
            case 'X':
                if (i!=str.length()-1)
                str[i+1]='0';
        }
    }cout<<score<<endl;
    
}
