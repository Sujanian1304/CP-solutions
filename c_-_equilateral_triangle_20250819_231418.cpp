/*
 * Problem: C - Equilateral Triangle
 * URL: https://atcoder.jp/contests/abc409/tasks/abc409_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    n--;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m%3!=0){
		cout<<"0\n";
		return;
	}
	vector<int> aa(n+1);
	for(int i=1;i<=n;i++){
		aa[i]=aa[i-1]+a[i-1];
		aa[i]=aa[i]%m;
	}
	map<int,int> mp;
	for(int i=0;i<=n;i++){
		mp[aa[i]]++;
	}
	int ans=0;
	for(int i=0;i<=m;i++){
		ans+=(mp[i]*mp[i+m/3]*mp[i+2*m/3]);
		//cout<<ans<<" ";
	}
	cout<<ans<<"\n";
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
