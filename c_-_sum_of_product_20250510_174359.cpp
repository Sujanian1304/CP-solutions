/*
 * Problem: C - Sum of Product
 * URL: https://atcoder.jp/contests/abc405/tasks/abc405_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);vector<int> p(n);
    for(int i=0;i<n;i++) cin>>a[i];
    p[0]=a[0];
    for(int i=0;i<n;i++) {
		p[i]=a[i]+p[i-1];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		//cout<<(p[n-1]-p[i]);
		ans+=a[i]*(p[n-1]-p[i]);
	}
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
