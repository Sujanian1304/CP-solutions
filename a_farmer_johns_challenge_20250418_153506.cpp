/*
 * Problem: A. Farmer John's Challenge
 * URL: https://codeforces.com/contest/1942/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(n==m){
		for(int i=0;i<n;i++){
			cout<<"1 ";
		}
		cout<<"\n";
	}
	else if(m==1){
		for(int i=0;i<n;i++){
			cout<<i+1<<" ";
		}
		cout<<"\n";
	}
	else cout<<"-1\n";
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
