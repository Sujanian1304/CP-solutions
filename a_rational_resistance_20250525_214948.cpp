/*
 * Problem: A. Rational Resistance
 * URL: https://codeforces.com/problemset/problem/343/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int a,b;cin>>a>>b;
    if(a==b){ cout<<1<<"\n";return;}
     if (a>b) swap(a,b);int ans=0;
     ans+=b/a;
     b=b%a;
	while(a&&b){
		if(a>b) swap(a,b);
		ans+=b/a;
		b=b%a;
	 }
		cout<<ans<<"\n";
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
