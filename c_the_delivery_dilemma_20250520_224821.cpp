/*
 * Problem: C. The Delivery Dilemma
 * URL: https://codeforces.com/contest/1443/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> b(n),c(n);
    for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
    vector<pair<int,int>> a(n);
	for(int i=0;i<n;i++){
		a[i].first=b[i];
		a[i].second=c[i];
	}
	sort(a.begin(),a.end());
	int ans=a[n-1].first;int sum=0;
	for(int i=n-1;i>0;i--){
		sum+=a[i].second;
		int x=max(sum,a[i-1].first);
		ans=min(x,ans);
	}
	ans=min(ans,sum+=a[0].second);
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
