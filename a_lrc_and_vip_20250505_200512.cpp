/*
 * Problem: A. LRC and VIP
 * URL: https://codeforces.com/contest/2107/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int>a(n);set<int> st;int ma=0;
    for(int i=0;i<n;i++){
		cin>>a[i];
		st.insert(a[i]);
		ma=max(a[i],ma);
	}
	if(st.size()==1){cout<<"No\n";return;}
	cout<<"YES\n";
	for(int i=0;i<n;i++){
		if(a[i]==ma) cout<<2<<" ";
		else cout<<1<<" ";
	}
	cout<<"\n";
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
