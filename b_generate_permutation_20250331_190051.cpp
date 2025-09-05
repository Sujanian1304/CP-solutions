/*
 * Problem: B. Generate Permutation
 * URL: https://codeforces.com/contest/2001/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    if(n==1) cout<<"1\n";
    else{
		if(n%2==0) cout<<"-1\n";
		else{
			cout<<"3 1 2 ";
			for(int i=4;i<=n;i++){
				if(i%2==0) cout<<i+1<<" ";
				else cout<<i-1<<" ";
			}
		}
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
