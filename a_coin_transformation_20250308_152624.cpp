/*
 * Problem: A. Coin Transformation
 * URL: https://codeforces.com/problemset/problem/2043/A
 * Time Limit: 2.0 seconds
 * Memory Limit: 512 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    // Your solution here
    int n;cin>>n;
    if(n<4) cout<<"1\n";
    else{
		int ans=1;
		while(n>=4){
			ans=ans*2;
			n=n/4;
		}
		cout<<ans<<"\n";
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
