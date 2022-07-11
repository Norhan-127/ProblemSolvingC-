#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    char arr[105][105];
    int n,m;
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    int row=x-1;
    int column=y-1;
    if (arr[row-1][column-1]!='.'&& arr[row-1][column]!='.' && arr[row-1][column+1]!='.'&&
        arr[row][column-1]!='.' && arr[row][column+1]!='.'&&
        arr[row+1][column-1]!='.'&& arr[row+1][column]!='.'&& arr[row+1][column+1]!='.') {
        cout<<"yes\n";
    }else cout<<"no\n";
}

        
   
    
