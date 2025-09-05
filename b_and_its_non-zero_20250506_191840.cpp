/*
 * Problem: B. And It's Non-Zero
 * URL: https://codeforces.com/problemset/problem/1615/B
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

int count_ones(int l, int r, int bit) {
    auto ones = [&](int x) {
        int full = x / (1 << (bit + 1)) * (1 << bit);
        int rem = max(0LL, x % (1 << (bit + 1)) - (1 << bit) + 1);
        return full + rem;
    };
    return ones(r) - ones(l - 1);
}
void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    
     int ans=0;
	for(int i=0;i<31;i++){
		ans=max(count_ones(n,m,i),ans);
	}
	cout<<(m-n+1)-ans<<"\n";
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
