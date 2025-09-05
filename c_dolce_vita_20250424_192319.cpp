/*
 * Problem: C. Dolce Vita
 * URL: https://codeforces.com/problemset/problem/1671/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	vector<int> p;p[0]=arr[0];
	for(int i=1;i<n;i++){
		p[i]=arr[i]+p[i-1];
	}
	int x=m-arr[0]+1;
	
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
