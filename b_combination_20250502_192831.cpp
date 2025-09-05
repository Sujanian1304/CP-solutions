/*
 * Problem: B. Combination
 * URL: https://codeforces.com/problemset/problem/155/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
		int b,c;cin>>b>>c;
		a[i].first=c;a[i].second=b;
	}
	sort(a.begin(),a.end());reverse(a.begin(),a.end());
	int p=0;int t=1;
	for(int i=0;i<n;i++){
		t+=a[i].first;t--;
		p+=a[i].second;
		if(t==0) break;
	}
	cout<<p<<"\n";
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
