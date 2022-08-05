#include <iostream>
#include <iomanip>
using namespace std;
void avr(int size){
    
    double sum=0;
    double arr[size];
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<setprecision(8)<<sum/size;    //average
    
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int size;
    cin>>size;
    
    avr(size);
}
   
//    cout<< fixed << setprecision(7)<<(double)Sum(n,nums)/n<<"\n";


