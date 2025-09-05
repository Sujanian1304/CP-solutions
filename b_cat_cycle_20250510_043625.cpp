/*
 * Problem: B. Cat Cycle
 * URL: https://codeforces.com/problemset/problem/1487/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    if(n%2==0){
		int x=m%n;
		if(x==0) cout<<n<<"\n";
		else cout<<x<<"\n";
	}
	else{
		m--;
		int f=n/2;
		cout<<(m+(m/f))%n+1<<"\n";
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
