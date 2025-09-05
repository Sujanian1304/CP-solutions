/*
 * Problem: B. StORage room
 * URL: https://codeforces.com/contest/1903/problem/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>arr[i][j];
	}
  }
  vector<int> brr(n,(1<<30)-1);
  for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(i!=j) {
			brr[i]&=arr[i][j];
			brr[j]&=arr[i][j];
		}
	}
  }
  bool flag=1;
  for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(i!=j&&(arr[i][j]!=(brr[i]|brr[j]))) {flag=0;break;}
	}
	if(flag==0) break;
  }
  if(flag) {cout<<"YES\n";
  for(auto&v:brr) cout<<v<<" ";
  cout<<"\n";}
  else cout<<"NO\n";
	
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
