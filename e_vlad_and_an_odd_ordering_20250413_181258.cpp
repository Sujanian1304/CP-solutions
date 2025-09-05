/*
 * Problem: E. Vlad and an Odd Ordering
 * URL: https://codeforces.com/contest/1926/problem/E
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans(int n,int m){
	if(m<=(n+1)/2) {int a=1+(m-1)*2;return a;}
	else return 2*ans((n)/2,m-(n+1)/2);
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
		cout<<ans(n,m)<<"\n";
		
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
