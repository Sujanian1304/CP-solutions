/*
 * Problem: B - cat 2
 * URL: https://atcoder.jp/contests/abc413/tasks/abc413_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<string> a(n);
    set<string> b;
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			string s=a[i]+a[j];
			string s1=a[j]+a[i];
			b.insert(s);b.insert(s1);
		}
	}
	cout<<b.size();
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
