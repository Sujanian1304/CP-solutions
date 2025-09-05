/*
 * Problem: C. Boats Competition
 * URL: https://codeforces.com/problemset/problem/1399/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	int ans=0;
	for(int i=2;i<=2*n;i++){
		int pairs=0;
		for(int j=1;j<i-j;j++){
			if(i-j>n) continue;
			pairs+=min(mp[j],mp[i-j]);
		}
		if(i%2==0){
			pairs+=mp[i/2]/2;
		}
		ans=max(pairs,ans);
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
