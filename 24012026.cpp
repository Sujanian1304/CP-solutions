/*
 * Problem: C - Peer Review
 * URL: https://atcoder.jp/contests/abc442/tasks/abc442_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int fact(int x) {
    int res = 1;
    for (int i=1;i<=x;i++)
        res*=i;
    return res;
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		arr[a-1]++;
		arr[b-1]++;
	}
	for(int i=0;i<n;i++){
		arr[i]++;
		int x=n-arr[i];
		if(x<3) cout<<0<<" ";
		else cout<<x*(x-1)*(x-2)/6<<" ";
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
