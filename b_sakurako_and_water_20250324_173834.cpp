/*
 * Problem: B. Sakurako and Water
 * URL: https://codeforces.com/contest/2033/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;
    cin>>n;
    int arr[n][n];vector<pair<int,int>> negn;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>arr[i][j];
		if(arr[i][j]<0){
			negn.push_back({i,j});
		}
	}
}int fans=0;
    for(auto&v:negn){
		int ans=0;
		if(arr[v.first][v.second]==0) continue;
		int x=v.first-v.second;
		for(int i=v.first;i<n;i++){
			for(int j=v.second;j<n;j++){
				 if(i-j==x&&arr[i][j]<0){
					 ans=min(ans,arr[i][j]);
					 arr[i][j]=0;
				 }
			 }
		 }
		     //cout<<ans<<" ";
			 fans+=abs(ans);
		 }
	cout<<fans<<"\n";
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
