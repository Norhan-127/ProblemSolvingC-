#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int n,m;
    cin>>n>>m;
    long long arr[100][100];
        for( int i = 0 ; i<n ; i++ ){
            for(int j= 0 ; j<m ; j++ ){
                cin >> arr[i][j];
            }
        }
    for (int i=0; i<n; i++) {
        for(int j= m-1 ; j>=0 ; j-- ){
            cout <<  arr[i][j] << " ";
        }
        cout<<endl;
    }
}

        
   
    
    
    
    



