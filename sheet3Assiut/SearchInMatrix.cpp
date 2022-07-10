#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,m,s;
    cin>>n>>m;
    int arr[n][m];
    bool flag=false;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }cin>>s;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (s==arr[i][j]) {
                flag=true;
            }
        }
    }if (flag) {
        cout<<"will not take number\n";
    }else
        cout<<"will take number\n";
    
}

        
   
    
    
    
    



