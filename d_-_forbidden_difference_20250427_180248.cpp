/*
 * Problem: D - Forbidden Difference
 * URL: https://atcoder.jp/contests/abc403/tasks/abc403_d
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	int ans=0;
	for(auto&v:mp){
		int x=m+v.first;int y=-1;
		if(v.first>m) y=abs(m-v.first);
		auto it=mp.find(x);
			auto it1=mp.find(y);
			if(it1!=mp.end()&&it!=mp.end()){
				int d=mp[x]+mp[y];
				if(d>=v.second){ans+=v.second;v.second=0;}
				else {ans+=d;mp[x]=0;mp[y]=0;}
			}else if(it1!=mp.end()){
			 if(mp[y]>=v.second){ans+=v.second;v.second=0;}
			else {ans+=mp[y];mp[y]=0;}
		}else if(it!=mp.end()) {if(mp[x]>=v.second){ans+=v.second;v.second=0;}
			else {ans+=mp[x];mp[x]=0;}}
	}
	cout<<ans<<"\n";
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
