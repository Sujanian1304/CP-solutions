/*
 * Problem: B. Pleasant Pairs
 * URL: https://codeforces.com/problemset/problem/1541/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n+1);map<int,int> mp;
    for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]=i;
	}
	int ans=0;
	for(int i=3;i<2*n;i++){
		for(int j=1;j*j<=i;j++){
			if(i%j==0){
				if(j!=i/j){
					if(mp[j]!=0&&mp[i/j]!=0&&mp[j]+mp[i/j]==i) ans++;
				}
			}
		}
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
