/*
 * Problem: B. Collatz Conjecture
 * URL: https://codeforces.com/contest/1982/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int x,y,k;cin>>x>>y>>k;
    while(x!=1&&k>0){
		int z=min(k,((x+y-1)/y)*y-x);
		if(z==0){
			x+=1;k--;continue;
		}
		x+=z;
		while(x%y==0) x/=y;
		k-=z;
	}
	if(k==0) cout<<x<<"\n";
	else{
		int ans=1+k%(y-1);
		cout<<ans<<"\n";
	}
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
