/*
 * Problem: B. SUMdamental Decomposition
 * URL: https://codeforces.com/contest/2108/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int ss(int Y, int k) {
    if(k == 0) {
        return (Y==0?0:1e18);
    }
    if(k == 1) {
        return (Y>0?Y:1e18);
    }
    int pc = __builtin_popcountll(Y);
    if(k == 2) {
        if(Y == 0) return 2;           
        if(pc >= 2) return Y;         
        int i = 0;
        while((Y>>i)&1) ++i;
        int t = 1LL << i;
        return Y + 2*t;
    }
    if(Y == 0) {
        if(k % 2 == 0) return k;       
        else return k + 3;
    }
    if(pc >= k) {
        return Y;                       
    }
    return 1e18;
}
void solve() {
    // Your solution here
    int n,m;cin>> n >> x;
     int ans = 1e18;
        if(n == 1) {
            if(x > 0) ans = x;
        } else {
            int maxK = min<int>(n, 32);
            for(int k = 0; k <= maxK; ++k) {
                int ones = n - k;
                int xor_ones = ones & 1;
                int Y = x^xor_ones;
                int s = ss(Y, k);
                if(s <1e18) {
                    ans = min(ans, s + ones);
                }
            }
        }

        cout << (ans>=1e18/2?-1:ans) << '\n';
		
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
