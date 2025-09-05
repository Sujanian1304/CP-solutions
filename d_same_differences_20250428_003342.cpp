/*
 * Problem: D. Same Differences
 * URL: https://codeforces.com/problemset/problem/1520/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]-(i+1)]++;
	}
	int ans=0;
  for(auto& v:mp){
	  if(v.second>1){ans+=(v.second-1)*v.second/2;}
  }
  cout<<ans<<"\n";
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
