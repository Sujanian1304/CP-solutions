/*
 * Problem: C - Variety Split Easy
 * URL: https://atcoder.jp/contests/abc397/tasks/abc397_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n];int dis[n];map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
		if(i!=0){
		if(mp[arr[i]]==1) dis[i]=dis[i-1]+1;
		else dis[i]=dis[i-1];
	}else{
		dis[i]=1;
	}
	}int dis1[n];mp.clear();dis1[n-1]=1;mp[arr[n-1]]++;
	for(int i=n-2;i>=0;i--){
		mp[arr[i]]++;
		if(mp[arr[i]]==1) dis1[i]=dis1[i+1]+1;
		else dis1[i]=dis1[i+1];
	}
	int ans=0;
	//for(auto&v:dis1) cout<<v<<" ";
	for(int i=0;i<n-1;i++){
		ans=max(ans,dis[i]+dis1[i+1]);
	} cout<<ans;
	
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
