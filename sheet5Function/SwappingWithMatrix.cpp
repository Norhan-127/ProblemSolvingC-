#include <iostream>
using namespace std;
int arr[505][505];
//first function for swaping the rows only
void swapRow(int size,int x,int y){
    //another array as a temperory copy of elements choosen to swap
    int ans[size][size];
    //minus one as array is zero index to catch the right position, & getting the minimum and maximum value
    int rx=x-1,ry=y-1,mini=min(rx,ry),maxx=max(rx, ry);
    for (int i=0; i<size; i++) { //iterates the rows
        for (int j=0; j<size; j++) { //iterates the columns
        if (i==mini) {
            ans[i][j]=arr[mini][j];
            arr[mini][j]=arr[maxx][j];
            arr[maxx][j]=ans[i][j];
        }else
            continue;
        }
    }
}
//second function for swaping the colunms only
void swapCol(int size,int x,int y){
    //another array as a temperory copy of elements choosen to swap
    int ans[size][size];
    //minus one as array is zero index to catch the right position, & getting the minimum and maximum value
    int cx=x-1,cy=y-1,mini=min(cx,cy),maxx=max(cx, cy);
    for (int i=0; i<size; i++) {  //iterates the rows
        for (int j=0; j<size; j++) {  //iterates the columns
            if (j==mini) {
                ans[i][j]=arr[i][mini];
                arr[i][mini]=arr[i][maxx];
                arr[i][maxx]=ans[i][j];
            }else
                continue;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int size;
    cin>>size;
    int x,y;
    cin>>x>>y;
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            cin>>arr[i][j];
        }
    }
    //calling two function of swapping in the right order (rows at first)
    swapRow(size, x, y);
    swapCol(size, x, y);
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            cout<<arr[i][j]<<" ";
        }cout<<endl; //brea; the line at the end of each row
    }cout<<endl;
}
//4 3 1        x=3,y=1
//1 2 3 -5
//-5 4 0 3
//7 7 1 2
//40 6 5 11
//---------------------
//1 7 7 2
//0 4 -5 3
//3 2 1 -5
//5 6 40 11


