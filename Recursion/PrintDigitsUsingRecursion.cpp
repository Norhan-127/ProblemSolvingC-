#include <iostream>
using namespace std;
void printDigits(int n){ //679
    if (n < 0)
            n = -1*n;
        if (n/10 > 0) //no need have else blocks
        {
            //for the correct order, make the recursive call first
            printDigits(n/10);
        }
        //print when you reach the most significant digit
        cout << n%10 << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int number,t;
    cin>>t;
    while (t--) {
        cin>>number;
        printDigits(number);
        cout<<endl;
    }
    return 0;
}


