/*
 * Problem: D. Blue-Red Permutation
 * URL: https://codeforces.com/problemset/problem/1607/D
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;vector<int> a(n);vector<pair<char,int>> b;
    for(int i=0;i<n;i++) {
		cin>>a[i];
		}
    string s;cin>>s;
    for(int i=0;i<n;i++) {
		b.push_back({s[i],a[i]});
		}
     sort(b.begin(),b.end());
     for(int i=0;i<n;i++){
		 if(b[i].first=='B'){
			 if(b[i].second>=i+1) continue;
			 else {cout<<"NO\n";return;}
		 }
		 else{
			  if(b[i].second<=i+1) continue;
			 else {cout<<"NO\n";return;}
		 }
	 }
	 cout<<"YES\n";
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
