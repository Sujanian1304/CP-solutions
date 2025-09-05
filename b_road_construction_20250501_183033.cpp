/*
 * Problem: B. Road Construction
 * URL: https://codeforces.com/problemset/problem/330/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<pair<int,int>> a(m);vector<bool> b(n+1,0);
    for(int i=0;i<m;i++){
		cin>>a[i].first>>a[i].second;
		b[a[i].second]=1;b[a[i].first]=1;
	}
    int ans=-1;
    for(int i=1;i<=n;i++){
		if(b[i]==0){ans=i;break;}
	}
	cout<<n-1<<"\n";
	for(int i=1;i<=n;i++){
		if(ans!=i) cout<<i<<" "<<ans<<"\n";
	}
		
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
