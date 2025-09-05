/*
 * Problem: B. Emordnilap
 * URL: https://codeforces.com/contest/1777/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
int fact(int n){
	if(n==1) return 1;
	return (n*fact(n-1))%mod;
}
void solve() {
    // Your solution here
    int n;
    cin>>n;
    int ans=((n-1)*n)%mod;
    int m=fact(n);
    ans=(ans*m)%mod;
    cout<<ans<<"\n";
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
