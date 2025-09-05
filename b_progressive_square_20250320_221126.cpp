/*
 * Problem: B. Progressive Square
 * URL: https://codeforces.com/problemset/problem/1955/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,c,d;
    cin>>n>>c>>d;
    int arr[n*n];
    int el=1e9+1;map<int,int> mp;
    for(int i=0;i<n*n;i++){
		cin>>arr[i];
		el=min(el,arr[i]);
		mp[arr[i]]++;
	}
	//cout<<el<<" ";
	int ans[n][n];ans[0][0]=el;
	auto it=mp.find(el);
	     if(it!=mp.end()) {mp[it->first]--;}
	for(int i=1;i<n;i++){
		ans[i][0]=ans[i-1][0]+c;
	     auto it=mp.find(ans[i][0]);
	     if(it!=mp.end()) {mp[it->first]--;}
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			ans[i][j]=ans[i][j-1]+d;
			 auto it=mp.find(ans[i][j]);
	       if(it!=mp.end()) {mp[it->first]--;}
		}
	}
	bool flag=1;
	for(auto&v:mp) {if(v.second>0) {flag=0;break;}}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
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
