/*
 * Problem: B - Not All
 * URL: https://atcoder.jp/contests/abc405/tasks/abc405_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);bool flag=1;vector<int> used(n+1,0);
    for(int i=0;i<n;i++) {cin>>a[i];used[a[i]]++;}
    for(int i=1;i<=m;i++){
		if(used[i]==0) {cout<<"0\n";return;}
	}
	int cnt=0;
    for(int i=n-1;i>=0;i--){
		used[a[i]]-=1;cnt++;
		if(used[a[i]]==0&&a[i]<=m){cout<<cnt<<"\n";return;}
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
