/*
 * Problem: B. Make It Permutation
 * URL: https://codeforces.com/contest/2118/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=j+1;
		}
	}
	vector<pair<int,pair<int,int>>> ans;
	for(int i=2;i<n;i++){
		reverse(a[i].begin(),a[i].begin()+i-1);
		ans.push_back({i+1,{1,i}});
	}
	for(int i=0;i<n-1;i++){
		reverse(a[i].begin()+i,a[i].end());
		ans.push_back({i+1,{i+1,n}});
	}
	cout<<ans.size()<<"\n";;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";
	}
	
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
