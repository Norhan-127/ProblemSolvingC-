#include <iostream>
using namespace std;
void printUpTN(int n){
    //condition for calling
    if (n<=1) return;
    cout<<n<<" ";
    printUpTN(n-1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int number;
    cin>>number;
    printUpTN(number);
    cout<<1<<endl;
    return 0;
}
