#include <bits/stdc++.h>
using namespace std;
const long long mod=1000000007;

void solve(long long a, long long b){
   long long ans=(((1LL<<a)-1)<<b)%mod;
   cout<<ans%mod<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        solve(a,b);
    }  
    return 0;
}
