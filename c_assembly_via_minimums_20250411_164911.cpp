/*
 * Problem: C. Assembly via Minimums
 * URL: https://codeforces.com/contest/1857/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;int x=n*(n-1)/2;
    vector<int> arr(x);map<int,int> mp;
    for(int i=0;i<x;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	vector<int> ans;
	for(auto&v:mp){
		while(v.second!=0){
			ans.push_back(v.first);
			int y=n-ans.size();
			v.second-=y;
		}
	}
	int a=ans.back();
	ans.push_back(a);
	for(auto&v:ans) cout<<v<<" ";
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
