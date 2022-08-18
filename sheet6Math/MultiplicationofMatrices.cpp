#include <iostream>
#include <cmath>
int a[105][105];
int b[105][105];
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int r1,c1;
    cin>>r1>>c1;
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++) {
            cin>>a[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
    for (int i=0; i<r2; i++) {
        for (int j=0; j<c2; j++) {
            cin>>b[i][j];
        }
    }
    int res[105][105]={0};
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++) {
            for (int x=0; x<c1; x++) {
                res[i][j]+=a[i][x]*b[x][j];
            }
        }
    }
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++) {
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    return 0;
}
//Given two matrices A and B. Print their Multiplication.
//It's guaranteed that number of columns in the matrix A is equal to number of rows in the matrix B.
//input:
//2 2        2 2
//
//1 2        3 4
//2 1        4 3
//output:
//11 10
//10 11



