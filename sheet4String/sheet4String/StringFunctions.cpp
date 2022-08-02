#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int n,q;
    cin>>n>>q;   //18,8
    string query,s;
    cin>>s;//assiutinupperegypt
    int l,r,pos;
    while (q--) {
        cin>>query;
            if (query=="pop_back") {
                s.pop_back();
//                cout<<s<<endl;
            }else if(query=="front"){
                cout<<s.front()<<endl;
            }else if (query=="back"){
                cout<<s.back()<<endl;
            }
            else if(query=="sort"){
                cin>>l>>r;
                sort(s.begin()+min((l-1),(r-1)), s.begin()+max(l,r));
//                cout<<s<<endl;
            }else if (query=="reverse"){
                cin>>l>>r;
                reverse(s.begin()+min((l-1),(r-1)), s.begin()+max(l,r));
//                cout<<s<<endl;
            }
            else if (query=="print"){
                    cin>>pos;
                cout<<s[pos-1]<<endl;
            }else if (query=="substr"){
                cin>>l>>r;
//              string str= s.substr((l-1),((r)-(l-1)));
                string str=s.substr(min((l-1),(r-1)),(max(l,r)-min((l-1),(r-1))));
                cout<<str<<endl;
            }else {
                char x;
                cin>>x;
                s.push_back(x);
//                cout<<s<<endl;
            }
    }
    
}
//assiutinupperegypt
//substr 1 6 --->   assiut
//sort 5 8 ----->  assiintuupperegypt
//pop_back -----> assiintuupperegyp
//back ---------> p
//reverse 1 6 --> niissatuupperegyp
//front --------> n
//push_back i --> tuissainupperegypi
//print 4 ------> s
