/*
 * Problem: B. Kill Demodogs
 * URL: https://codeforces.com/contest/1731/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
int mod_inv(int a,int b,int m){
	int res=1;
	a%=m;
	while(b){
		if(b&1) res=res*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return res;
}
void solve() {
    // Your solution here
    int n;cin>>n;int ans=0;
    int x=((n%mod)*(n+1)%mod*(4*(n%mod)-1)%mod)%mod;
    ans+=(x*mod_inv(6,mod-2,mod))%mod;
    ans=(ans%mod*2022)%mod;
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
