#include <iostream>
#include <cmath>
using namespace std;
void printRec(short number){
    cout<<"I love Recursion"<<endl;
    number--;
    if (number==0) {
        return;
    }else{
        printRec(number);
    }
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    short num;
    cin>>num;
    printRec(num);
}
