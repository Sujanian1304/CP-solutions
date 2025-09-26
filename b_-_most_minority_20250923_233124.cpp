/*
 * Problem: B - Most Minority
 * URL: https://atcoder.jp/contests/abc420/tasks/abc420_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);
    vector<vector<int>> b(n,vector<int>(m));
    for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<(int)s.size();j++){
		    b[i][j]=s[j]-48;
		}
	}
	for(int j=0;j<m;j++){
		int ans=0;
		for(int i=0;i<n;i++){
			ans+=b[i][j];
		}
		if(n==ans){
			for(int i=0;i<n;i++) a[i]+=1;
		}
		else if(n-ans>ans){
			for(int i=0;i<n;i++){
				if(b[i][j]==1) a[i]+=1;
			}
		}else{
			for(int i=0;i<n;i++){
				if(b[i][j]==0) a[i]+=1;
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==ans) cout<<i+1<<" ";
	}
	
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    //
    while (t--) {
        solve();
    }
    
    return 0;
}
