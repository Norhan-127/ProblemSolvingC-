#include <iostream>
using namespace std;
void printReverseEvenIndices(int n,int a[]){ //6 //1 5 8 2 3 9 11
    if(n==0){
        cout<<a[n]<<endl;
        return;
    }
    if(n%2==0){
        cout<<a[n]<<" ";
    }
    printReverseEvenIndices(n-1,a);   //printReverseEvenIndices(,a)
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
        cin>>n;
        int ar[n+5];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        printReverseEvenIndices(n-1,ar);
    return 0;
}

//Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

//Input
//First line contains a number N (1 ≤ N ≤ 10e3) number of elements.
//
//Second line contains N numbers ( - 10e9 ≤ Ai ≤ 10e9).

//Output
//Print numbers in even indices in a reversed order separated by spaces.

//Examples
//4
//1 4 2 7     output--> 2 1


