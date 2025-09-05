/*
 * Problem: B. Three Sevens
 * URL: https://codeforces.com/contest/1798/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n ;cin>>n;
    map<int,int> mp;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
      int b;cin>>b;
      for(int j=0;j<b;j++){
		 int c;cin>>c;
		a[i].push_back(c);
		mp[c]=i+1;
	}
  }
  vector<int> ans;
  for(int i=0;i<n;i++){
	  bool flag=0;
	  for(int j=0;j<(int)a[i].size();j++){
		  if(mp[a[i][j]]==i+1){flag=1;ans.push_back(a[i][j]);mp[a[i][j]]=1e18;break;}
	  }
	  if(!flag){cout<<"-1\n";return;}
  }
  for(int i=0;i<n;i++){
	  cout<<ans[i]<<" ";
  }
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
