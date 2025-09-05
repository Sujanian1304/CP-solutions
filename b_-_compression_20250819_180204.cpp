/*
 * Problem: B - Compression
 * URL: https://atcoder.jp/contests/abc408/tasks/abc408_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
		int a;cin>>a;
		st.insert(a);
	}
	cout<<st.size()<<"\n";
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		cout<<*it<<" ";
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
