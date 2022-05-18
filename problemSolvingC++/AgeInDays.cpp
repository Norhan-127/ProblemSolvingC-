#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
     
    long long age,year,month,day;
    cout<<"ENTER YOUR AGE IN DAYS\n";
    cin>>age;
    year=age/365;
    month=age%365/30;
    day=age%365%30;
    cout<<year<<" years\n";
    cout<<month<<" months\n";
    cout<<day<<" days\n";
    
    
    
    return 0;
}
