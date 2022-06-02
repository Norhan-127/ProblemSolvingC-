#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int num;
    cin>>num;
    int even=0,odd=0,positive=0,negative=0;
    int test;
    for(int i=1;i<=num;i++){
        cin>>test;
        if (test>0) {
            positive++;
        }
        if (test<0){
            negative++;
        }
        if (test%2==0){
            even++;
        }
        if (test%2!=0){
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<positive<<endl<<"Negative: "<<negative<<endl;

    
    return 0;
}
