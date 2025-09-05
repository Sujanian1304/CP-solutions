/*
 * Problem: B. Taisia and Dice
 * URL: https://codeforces.com/contest/1790/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,s,r;cin>>n>>s>>r;
    vector<int> ans(n);
    ans[0]=s-r;
    int m=s-r;int rem_s=r;int rem=n-1;
    for(int i=1;i<n;i++){
		ans[i]=min(m,rem_s-(rem-1));
		rem_s-=ans[i];
		rem--;
	}
	for(auto&v:ans) cout<<v<<" ";
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
