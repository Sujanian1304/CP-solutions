/*
 * Problem: B. Hossam and Friends
 * URL: https://codeforces.com/contest/1771/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int  n,m;cin>>n>>m;
    int ans=n;vector<int> s(n,n+1);
    for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		if(a>b) swap(a,b);
		s[a]=min(b,s[a]);
	}
	vector<int> suf(n+1,n+1);
	for(int i=n-1;i>=0;i--){
		suf[i]=min(s[i],suf[i+1]);
	}
	for(int i=1;i<n;i++){
		ans+=(suf[i]-1-i);
	}
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
