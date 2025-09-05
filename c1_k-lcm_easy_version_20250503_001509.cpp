/*
 * Problem: C1. k-LCM (easy version)
 * URL: https://codeforces.com/problemset/problem/1497/C1
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(n%2){
		if(n==3) cout<<"1 1 1\n";
		else{
		  cout<<n/2<<" "<<n/2<<" "<<1<<"\n";
	  }
	}else{
		if((n/2)%2){
			cout<<n/2-1<<" "<<n/2-1<<" "<<2<<"\n";
		}else{
			cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
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
