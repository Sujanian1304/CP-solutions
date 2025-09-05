/*
 * Problem: A. It's Time To Duel
 * URL: https://codeforces.com/contest/2109/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);set<int> st;
    for(int i=0;i<n;i++) {cin>>a[i];st.insert(a[i]);}
    if(st.size()==1) {cout<<"YES\n";return;}
    for(int i=0;i<n-1;i++){
		if(a[i]==0&&a[i+1]==0){
			cout<<"YES\n";return;
		}
	}
	cout<<"NO\n";
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
