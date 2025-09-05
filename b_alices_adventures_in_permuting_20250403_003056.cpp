/*
 * Problem: B. Alice's Adventures in Permuting
 * URL: https://codeforces.com/contest/2028/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,a,b;cin>>n>>a>>b;
    if(a==0&&b==0) {
		if(n>2)cout<<"-1\n";
		else cout<<n-1<<"\n";
	}
    else if(a==0){
		if(b>=n) cout<<n<<"\n";
		else {
			if(b==n-1||b==n-2)cout<<n-1<<"\n";
			else cout<<"-1\n";
		}
	}
	else{
		if(n-1<b) cout<<n<<"\n";
		else{
      int ans=(n-1-(b))/a+1;
	  cout<<n-ans<<"\n";
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
