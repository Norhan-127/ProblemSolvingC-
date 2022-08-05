#include <iostream>
//#include <cmath>
using namespace std;

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}

int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<endl;
}


