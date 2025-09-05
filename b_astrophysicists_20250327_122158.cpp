/*
 * Problem: B. Astrophysicists
 * URL: https://codeforces.com/problemset/problem/1836/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,k,g;cin>>n>>k>>g;
    int x=min((g-1)/2*n,k*g);
    int y=(k*g-x)%g;
    if(y>0){
		x-=(g-1)/2;
		int l=((g-1)/2+y)%g;
		if(l*2>=g){
			x-=g-l;
		}else{
			x+=l;
		}
	}
	cout<<x<<"\n";
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
