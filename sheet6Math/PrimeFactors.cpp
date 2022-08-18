#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const int N=2e7+5;
vector<int> ans;
int frq[N];
int main() {
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      int n;
      cin>>n;
      while (n%2 == 0)
    {
        if(frq[2]==0)
        ans.push_back(2);
 
        frq[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            if(frq[i]==0)
            ans.push_back(i);
 
            frq[i]++;
            n = n/i;
        }
    }
    if (n > 2) {
        if(frq[n]==0)
        ans.push_back(n);
        frq[n]++;
    }
    for(int i=0;i<ans.size();i++){
        if(i!=0) cout<<"*";
        cout<<"("<<ans[i]<<"^"<<frq[ans[i]]<<")";
    }
    cout<<endl;
     return 0;
//    cout<<1260%2<<endl;
}
//Given a number N. Print the prime factors of N in the following form: (P1)x * (P2)y * (P3)z * ...
//Note: P1, P2, ..., Pi are prime factors of N.
//Factors are the numbers you multiply together to get another number. In simple words, prime factor is finding which prime numbers multiply together to make the original number. Example: The prime factors of 15 are 3 and 5 (because 3×5=15, and 3 and 5 are prime numbers).
//1260----->2 2 3 3 5 7
