/*
 * Problem: B. New Bakery
 * URL: https://codeforces.com/contest/1978/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,a,b;cin>>n>>a>>b;
    if(a>=b){
		cout<<n*a<<"\n";
	}
	else {
		int x=b-a+1;
		if(x>=n){
		int ans=(b*(b+1)/2)-((b-n)*(b-n+1)/2);
		cout<<ans<<"\n";
	}
	else{
		int ans=(b*(b+1)/2)-((b-x)*(b-x+1)/2);
		ans+=(n-(b-(b-x)))*a;
		cout<<ans<<"\n";
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
