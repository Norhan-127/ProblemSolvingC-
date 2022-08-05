#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int arr[105];
int maxi(int n,int arrOfMax[105]){
    int maxx=INT_MIN;
    for (int i=0; i<n; i++) {
        maxx=max(maxx,arr[i]);
    }
    return maxx;
}
int mini(int n,int arrOfMini[105]){
    int minimum=INT_MAX;
    for (int i=0; i<n; i++) {
        minimum=min(minimum,arr[i]);
    }
    return minimum;
}
int prime(int num){
    if (num <= 1)
          { return 0; }
       // Check from 2 to square root of arr[i]
       for (int j = 2; j <= sqrt(num); j++){
          if (num % j == 0 && num!=2){
             return 0;
          }
       }return 1;
}
int palindrome(int n){
    int num=n,reversing=0;
    while (n>0) {
        reversing=reversing*10+n%10;
        n/=10;
    }if(reversing==num){
        return 1;
    }else
        return 0;
    
}
int countDiv(int n){
    int c=0;
    for (int i=1; i<=sqrt(n); i++) {
        if (n%i==0) {
            c++;
        }else continue;;
    }
    return c;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int size;
    cin>>size;
    int countPrime=0,countPalindrome=0,divCount=INT_MIN;
    int isprime=0,isPalindrome=0;
    for (int i=0; i<size; i++) {
        cin>>arr[i];
        isprime=prime(arr[i]);
        if(isprime==1)
            countPrime++;
        isPalindrome=palindrome(arr[i]);
        if (isPalindrome==1)
            countPalindrome++;
    }
    int mx=INT_MIN,index=0;
    for (int i=0; i<size; i++) {
        //8 2 14 1 83
        //DIV : 4
        //DIV : 2
        //DIV : 4
        //DIV : 1
        //DIV : 2
        divCount=countDiv(arr[i]);
        if (i==0) {
            mx=divCount;
            index=i;
        }else{
            if (divCount>=mx) {
                mx=divCount;
                index=i;
            }
        }
    }
    cout<<"The maximum number : "<<maxi(size, arr)<<endl;
    cout<<"The minimum number : "<<mini(size,arr)<<endl;
    cout<<"The number of prime numbers : "<<countPrime<<endl;
    cout<<"The number of palindrome numbers : "<<countPalindrome<<endl;
    cout<<"The number that has the maximum number of divisors : "<<arr[index]<<endl;
}

//input:
//4
//1 2 5 8
//output:
//The maximum number : 8
//The minimum number : 1
//The number of prime numbers : 2
//The number of palindrome numbers : 4
//The number that has the maximum number of divisors : 8

