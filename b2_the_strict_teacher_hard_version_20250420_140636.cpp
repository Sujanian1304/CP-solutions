/*
 * Problem: B2. The Strict Teacher (Hard Version)
 * URL: https://codeforces.com/contest/2005/problem/B2
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,q;cin>>n>>m>>q;
    vector<int> T(m);
    for(int i=0;i<m;i++) cin>>T[i];
    sort(T.begin(),T.end());
    for(int i=0;i<q;i++){
		int a;cin>>a;
		auto it=upper_bound(T.begin(),T.end(),a)-T.begin();
		if(it==m) cout<<n-T[it-1]<<"\n";
		else if(it==0) cout<<T[it]-1<<"\n";
		else{
			int x=(T[it]+T[it-1])/2;
			cout<<x-T[it-1]<<"\n";
		}
	}
	
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
