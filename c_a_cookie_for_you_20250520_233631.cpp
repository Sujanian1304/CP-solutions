/*
 * Problem: C. A Cookie for You
 * URL: https://codeforces.com/problemset/problem/1371/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b,n,m;cin>>a>>b>>n>>m;
    if(n+m>a+b){cout<<"No\n";return;}
		if(a>b) swap(a,b);
		if(a>=m){
			if((a-m)+ew23b>=n){cout<<"Yes\n";return;}
			else{cout<<"No\n";
			}
		}else{
			cout<<"No\n";
			return;
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
