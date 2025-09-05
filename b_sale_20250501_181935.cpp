/*
 * Problem: B. Sale
 * URL: https://codeforces.com/problemset/problem/34/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);vector<int>b;
    for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){b.push_back(-a[i]);
		}
	}
	sort(b.begin(),b.end(),greater<int>());
	int sum=0;
    int x=min((int)b.size(),m);
    for(int i=0;i<x;i++){
		sum+=b[i];}
		cout<<sum;
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
