/*
 * Problem: A - Doors in the Center
 * URL: https://atcoder.jp/contests/abc398/tasks/abc398_a
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n&1LL){
		vector<char> arr(n,'-');
		arr[n/2]='=';
		for(auto&v:arr) cout<<v;
	}else{
		vector<char> arr(n,'-');
		arr[n/2-1]='=';arr[n/2]='=';
		for(auto&v:arr) cout<<v;
	}
		
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
