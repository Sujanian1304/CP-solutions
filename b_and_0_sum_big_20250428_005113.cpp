/*
 * Problem: B. AND 0, Sum Big
 * URL: https://codeforces.com/problemset/problem/1514/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
int s(int n){
	if(n==1) return 1;
	else return (n*(s(n-1)%mod))%mod;
}
int binpow(int a,int b){
	if(b==0) return 1;
    if(b%2) return (a*binpow(a,b-1))%mod;
    else {
		int ans=binpow(a,b/2);
		return (ans*ans)%mod;
	}
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int x=binpow(n,m);
    //x=(x*(n-1))%mod;
	cout<<x%mod<<"\n";
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
