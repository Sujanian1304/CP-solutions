/*
 * Problem: C1. The Cunning Seller (easy version)
 * URL: https://codeforces.com/contest/2132/problem/C1
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

int calculatex(int n){
	long double k=logl(n+1)/logl(3);
	int exp=ceil(k);
	return exp-1;
}

int binpow(int a, int b){
    int res = 1;
    while(b > 0){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
void solve() {
    // Your solution here
    int n;cin>>n;
    int x=calculatex(n);
    int coins=0;
    while(n>0){
		int d=binpow(3,x);
		coins+=n/d*(binpow(3,x+1)+x*binpow(3,x-1));
		n%=d;
		x--;
	}
	cout<<coins<<"\n";
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
