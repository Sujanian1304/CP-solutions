/*
 * Problem: C. Yet Another Permutation Problem
 * URL: https://codeforces.com/problemset/problem/1858/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr;arr.push_back(1);
    int x=2;map<int,int> mp;
    while(x!=n+1){
		int y=x;
		if(mp[y]==0)arr.push_back(y);mp[y]++;
		while(y*2<=n) {
			if(mp[y*2]==0){
			mp[y*2]++;arr.push_back(y*2);}y*=2;
		}
		x++;
	}
	for(auto&v:arr) cout<<v<<" ";
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
