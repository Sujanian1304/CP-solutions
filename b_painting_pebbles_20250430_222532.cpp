/*
 * Problem: B. Painting Pebbles
 * URL: https://codeforces.com/problemset/problem/509/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);int mi=1e9;int ma=0;
    for(int i=0;i<n;i++){cin>>a[i];mi=min(mi,a[i]);ma=max(ma,a[i]);}
    if(ma>mi+m){cout<<"NO\n";return;}
    cout<<"YES\n";
    for(int i=0;i<n;i++){
		int x=a[i];
		for(int j=1;j<=x;j++){
			cout<<((j%m==0)?m:j%m)<<" ";
		}
		cout<<"\n";
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
