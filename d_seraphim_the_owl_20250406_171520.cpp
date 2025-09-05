/*
 * Problem: D. Seraphim the Owl
 * URL: https://codeforces.com/contest/1945/problem/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int sum=0;
	for(int i=n-1;i>(m-1);i--){
		sum+=min(b[i],a[i]);
	}
	int ans=a[m-1];int x=0;
	for(int i=m-1;i>0;i--){
		x+=b[i];
		ans=min(ans,x+a[i-1]);
	}
	sum+=ans;
	cout<<sum<<"\n";
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
