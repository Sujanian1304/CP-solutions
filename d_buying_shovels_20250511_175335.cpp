/*
 * Problem: D. Buying Shovels
 * URL: https://codeforces.com/problemset/problem/1360/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i<=k) ans.push_back(i);
			if(n/i<=k) ans.push_back(n/i);
		}
	}
	sort(ans.begin(),ans.end());
	cout<<n/ans.back()<<"\n";
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
