/*
 * Problem: B. Vika and the Bridge
 * URL: https://codeforces.com/problemset/problem/1848/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]].push_back(i);
	}
	int mi=1e9;
	for(auto&v:mp){
		int x=v.second.size();vector<int> ma;ma.push_back(v.second[0]);
		//if(ma>=mi) break;
		for(int i=1;i<x;i++){
			ma.push_back((v.second[i]-v.second[i-1])-1);
		}
		ma.push_back((n-v.second[x-1])-1);
		sort(ma.begin(),ma.end());x=ma.size()-1;
		int y=max(ma[x-1],ma[x]/2);
		mi=min(mi,y);
		//cout<<mi;
	}
	cout<<mi<<"\n";
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
