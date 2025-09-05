/*
 * Problem: C - 2^a b^2
 * URL: https://atcoder.jp/contests/abc400/tasks/abc400_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int binpow(int a,int b){
	if(b==0) return 1;
	if(b%2) return a*binpow(a,b-1);
	else {
		int x=binpow(a,b/2);
		return x*x;
	}
}
void solve() {
    // Your solution here
      long long n;
    cin >> n;
    long long ans = 0;
    
    
    for (int c = 1; (1LL << c) <= n; c++){
        long long power = (1LL << c);
        long double maxVal = n / (long double)power;
        long long M = (long long)floor(sqrt(maxVal));
        if(M < 1) continue;
        long long oddCount = (M + 1) / 2;
        ans += oddCount;
    }
    
    cout << ans << "\n";
    
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
