/*
 * Problem: D. Skibidus and Sigma
 * URL: https://codeforces.com/problemset/problem/2065/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));vector<pair<int,int>> s(n);
    for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			int a;cin>>a;
			arr[i][j]=a;
			sum+=arr[i][j];
		}
		s[i]={sum,i};
	}
	sort(s.begin(),s.end(),[](pair<int,int> a,pair<int,int>b){return a.first>b.first;});
	vector<int> ans;
	for(auto&v:s){
		for(int j=0;j<m;j++){
			ans.push_back(arr[v.second][j]);
		}
	}
	int l=ans.size();
	vector<int> prefix(l);prefix[0]=ans[0];int fans=prefix[0];
	for(int i=1;i<l;i++){
		prefix[i]=prefix[i-1]+ans[i];
		fans+=prefix[i];
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
