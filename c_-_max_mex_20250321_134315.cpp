/*
 * Problem: C - Max MEX
 * URL: https://atcoder.jp/contests/abc290/tasks/abc290_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    set<int> st;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		st.insert(a);
	}
	for(int i=0;i<k;i++){
		if(st.find(i)==st.end()){
			cout<<i;
			return;
		}
	}
	cout<<k;
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
