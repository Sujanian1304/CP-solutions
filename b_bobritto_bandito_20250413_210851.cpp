/*
 * Problem: B. Bobritto Bandito
 * URL: https://codeforces.com/contest/2094/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int x=n-m;
    while(x>0){
		if(l<0){ l++;x--;}
		if(x<=0) break;
		if(r>0) {r--;x--;}
	}
	cout<<l<<" "<<r<<"\n";
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
