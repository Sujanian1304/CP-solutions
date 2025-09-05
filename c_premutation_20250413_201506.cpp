/*
 * Problem: C. Premutation
 * URL: https://codeforces.com/contest/1790/problem/C
 * Time Limit: 3.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;unordered_map<int,set<int>>mp;
    for(int i=0;i<n;i++){
		vector<int> arr(n-1);
		for(int j=0;j<n-1;j++){
			cin>>arr[j];
		}
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n-1;k++){
				mp[arr[j]].insert(arr[k]);
			}
		}
	}
	vector<pair<int,int>> ans;
	for(auto&v:mp){
		//cout<<v.second.size()<<" "<<v.first<<" ";
		ans.push_back({v.second.size(),v.first});
	}
	sort(ans.begin(),ans.end());
	reverse(ans.begin(),ans.end());
	int sum=n*(n+1)/2;
	for(auto&v:ans) {cout<<v.second<<" ";sum-=v.second;}
	cout<<sum<<" ";
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
