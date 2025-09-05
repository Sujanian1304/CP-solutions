/*
 * Problem: A. Max and Mod
 * URL: https://codeforces.com/contest/2084/problem/0
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
		cout<<n<<" ";
		for(int i=1;i<n;i++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	else{
		cout<<"-1\n";
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
