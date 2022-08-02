#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string egy;
    cin>>egy;
    int e=0,g=0,p=0,y=0,t=0,count=0;
    for (int i=0; i<egy.size(); i++) {
        if (egy[i]=='e'||egy[i]=='E') {
            e++;
        }if (egy[i]=='g'||egy[i]=='G'){
            g++;
        }if (egy[i]=='y'||egy[i]=='Y'){
            y++;
        }if (egy[i]=='p'||egy[i]=='P'){
            p++;
        }if (egy[i]=='t'||egy[i]=='T'){
            t++;
        }count=min(min(min(min(e,g),p),y),t);
    }cout<<count<<endl;
    
}
//EgYpTaz
//1

//pemigdbeigyypetet
//2

//Egypt,egypt,eGyPt
