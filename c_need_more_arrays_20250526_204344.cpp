/*
 * Problem: C. Need More Arrays
 * URL: https://codeforces.com/contest/2114/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int c=0;
	int l=-1e9;
	for(int i=0;i<n;i++){
		if(a[i]>=l+2){
			c++;
			l=a[i];
		}
	}
	cout<<c<<"\n";
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
