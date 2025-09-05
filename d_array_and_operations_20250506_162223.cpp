/*
 * Problem: D. Array and Operations
 * URL: https://codeforces.com/problemset/problem/1618/D
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int sum=0;
	vector<int> b(a.begin()+(n-2*k),a.end());
	int m=b.size();
	for(int i=0;i<m/2;i++){
		sum+=b[i]/b[i+m/2];
	}
	
	for(int i=0;i<(n-2*k);i++) sum+=a[i];
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
