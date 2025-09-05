/*
 * Problem: A. Permutation Warm-Up
 * URL: https://codeforces.com/contest/2108/problem/0
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n%2){
		int x=((n)*(n)-1)/2;
		x=x/2+1;
		cout<<x<<"\n";
	}else{
		int x=(n)*(n)/2;
		x=x/2+1;
		cout<<x<<"\n";
	}
	
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
