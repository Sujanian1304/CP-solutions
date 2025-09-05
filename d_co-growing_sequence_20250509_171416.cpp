/*
 * Problem: D. Co-growing Sequence
 * URL: https://codeforces.com/problemset/problem/1547/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> ans;
    ans.push_back(0);
    for(int i=1;i<n;i++){
		int x=0;
		for(int j=0;j<31;j++){
			if(1LL&(a[i-1]>>j)){
				if(!(1LL&(a[i]>>j))){x+=(1LL<<j);}
			}
		}
		a[i]=a[i]^x;
		ans.push_back(x);
	}
  for(auto&v:ans){cout<<v<<" ";}
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
