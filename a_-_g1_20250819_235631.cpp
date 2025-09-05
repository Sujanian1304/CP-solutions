/*
 * Problem: A - G1
 * URL: https://atcoder.jp/contests/abc410/tasks/abc410_a
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
	int b;cin>>b;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]>=b) cnt++;
	}
	cout<<cnt<<"\n";
	
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
  //  cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
