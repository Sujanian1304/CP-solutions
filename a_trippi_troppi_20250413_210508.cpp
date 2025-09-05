/*
 * Problem: A. Trippi Troppi
 * URL: https://codeforces.com/contest/2094/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
int binpow(int a,int b){
	if(a==0) return 1;
	else if(b%2) return a*binpow(a,b-1)%mod;
	else {
		int ans=binpow(a,b/2)%mod;
		return ans*ans%mod;
	}
}
void solve() {
    // Your solution here
   int n;cin>>n;
   n--;
   int x=binpow(2,n)%mod;
   cout<<x<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
