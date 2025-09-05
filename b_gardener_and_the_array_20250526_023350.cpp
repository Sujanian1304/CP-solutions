/*
 * Problem: B. Gardener and the Array
 * URL: https://codeforces.com/contest/1775/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define lpr pair<int,vector<int>>
bool comp1(lpr a,lpr b){
	return a.first<b.first;
}
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,vector<int>>> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
		int x;cin>>x;
		a[i].first=x;
		for(int j=0;j<x;j++){
			int b;cin>>b;mp[b]++;
			a[i].second.push_back(b);
		}
	}
	for(int i=0;i<n;i++){
		bool flag=1;
		for(int j=0;j<a[i].first;j++){
			if(mp[a[i].second[j]]>=2) continue;
			else {flag=0;break;}
		}
		if(flag){cout<<"YES\n";return;}
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
