/*
 * Problem: B. Playing in a Casino
 * URL: https://codeforces.com/problemset/problem/1808/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<vector<int>> a(m,vector<int>(n));
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[j][i];
		}
	}
	
	int sum=0;
	for(int i=0;i<m;i++){
		vector<int> r=a[i];
		sort(r.begin(),r.end());
		int p=0;
		for(int j=0;j<n;j++){
			sum+=1LL*r[j]*j-p;
			p+=r[j];
		}
	}
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
