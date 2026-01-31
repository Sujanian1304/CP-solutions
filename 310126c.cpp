/*
 * Problem: C - Chokutter Addiction
 * URL: https://atcoder.jp/contests/abc443/tasks/abc443_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,t;cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==0) {cout<<t;return;}
	int ans=0;int x=0;
	for(int i=0;i<n;i++){
		if(i==0) {ans+=a[i];x=a[i]+100;}
		else{
			if(a[i]>=x) {
				ans+=a[i]-x;
				x=a[i]+100;
			}
		}
	}
	if(x<t) ans+=t-(x);
	cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
