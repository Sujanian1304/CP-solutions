/*
 * Problem: A. Stickogon
 * URL: https://codeforces.com/contest/1957/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);map<int,int> mp;
    for(int i=0;i<n;i++) {cin>>a[i];mp[a[i]]++;}
    int cnt=0;
    for(auto&v:mp){
		if(v.second>=3) {cnt+=v.second/3;}
	}
	cout<<cnt<<"\n";
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
