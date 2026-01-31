/*
 * Problem: D - Pawn Line
 * URL: https://atcoder.jp/contests/abc443/tasks/abc443_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> ans(n);
	ans[0]=a[0];
	for(int i=1;i<n;i++){
		ans[i]=min(a[i],ans[i-1]+1);
	}
	for(int i=n-2;i>=0;i--){
		ans[i]=min(ans[i],ans[i+1]+1);
	}
	int b=0;
	for(int i=0;i<n;i++){
		b+=a[i]-ans[i];
	}
	cout<<b<<"\n";
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
