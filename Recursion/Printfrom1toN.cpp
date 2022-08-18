#include <iostream>
using namespace std;
void printUpTN(int n){
    //condition for calling
    if (n==0) return;
    printUpTN(n-1);
    cout<<n<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int number;
    cin>>number;
    printUpTN(number);
    return 0;
}
