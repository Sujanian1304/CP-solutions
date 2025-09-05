/*
 * Problem: B - Distance Table
 * URL: https://atcoder.jp/contests/abc411/tasks/abc411_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int  n;cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int b=0;
		for(int j=i;j<n-1;j++){
			b+=a[j];
			cout<<b<<" ";
		}
		cout<<"\n";
	}
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
