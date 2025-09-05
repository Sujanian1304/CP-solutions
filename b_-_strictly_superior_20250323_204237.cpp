/*
 * Problem: B - Strictly Superior
 * URL: https://atcoder.jp/contests/abc310/tasks/abc310_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
		int p;cin>>p;
		arr[i].push_back(p);
		int f;cin>>f;
		arr[i].push_back(f);
		for(int j=0;j<f;j++){
			int a;cin>>a;
			arr[i].push_back(a);
		}
	}bool flag=0;
	for(int i=0;i<n;i++){
		sort(arr[i].begin()+2,arr[i].end());
	}
	for(int i=1;i<n;i++){
		if(arr[i-1][0]<arr[i][0]&&arr[i-1][1]>=arr[i][1]){
			int x=arr[i].size();int cnt=0;
			for(int j=2;j<x;j++){
				auto it=lower_bound(arr[i-1].begin()+2,arr[i-1].end(),arr[i][j]);
				if(*it==arr[i][j]){cnt++;}
			}
			if(cnt==arr[i].size()-2) {flag=1;break;}
			
		}
	}
	if(flag) cout<<"Yes\n";
	else cout<<"No\n";
    
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
