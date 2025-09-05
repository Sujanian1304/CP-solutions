/*
 * Problem: B. Floor or Ceil
 * URL: https://codeforces.com/contest/2082/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 512 MB
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

int binpow(int a, int b) {
    if(b == 0) return 1;
    else if(b % 2) return a * binpow(a, b-1);
    else {
        int ans = binpow(a, b/2);
        return ans * ans;
    }
}
int F(int a,int b){
	while(b--){
		if(a==0) return a;
		a=a/2;
	}
	return a;
}
int C(int a,int b){
	while(b--){
		if(a<=1) return a;
		a=(a+1)/2;
	}
	return a;
}
void solve() {
    int x, n, m;
    cin >> x >> n >> m;
    int mi=F(C(x,m),n);
    int ma=C(F(x,n),m);
    cout<<mi<<" "<<ma<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
