/*
 * Problem: B. Gellyfish and Baby's Breath
 * URL: https://codeforces.com/contest/2116/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=998244353;
int binpow(int a, int b) {
    int res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> a(n),b(n);
    vector<pair<int,int>> max_a(n),max_b(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0) {
			max_a[i].first=max(a[i],max_a[i-1].first);
			max_a[i].second=((a[i]>max_a[i-1].first)?i:max_a[i-1].second);
		}
		else {max_a[i].first=a[i];max_a[i].second=i;}
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(i>0) {
			max_b[i].first=max(b[i],max_b[i-1].first);
			max_b[i].second=((b[i]>max_b[i-1].first)?i:max_b[i-1].second);
		}
		else {max_b[i].first=b[i];max_b[i].second=i;}
	}
	vector<int> ans(n);
	for(int i=0;i<n;i++){
		int x=max_a[i].first;
		int y=max_b[i].first;
		 int res = 0;

        if (x > y) {
            int idx = max(0LL, i - max_a[i].second);
            res = (binpow(2, x) + binpow(2, b[idx])) % mod;
        } else if (y > x) {
            int idx = max(0LL, i - max_b[i].second);
            res = (binpow(2, y) + binpow(2, a[idx])) % mod;
        } else {
            int idxA = max(0LL, i - max_b[i].second);
            int idxB = max(0LL, i - max_a[i].second);
            res = (binpow(2, y) + binpow(2, max(a[idxA], b[idxB]))) % mod;
        }

        ans[i] = res;
	}
	for(auto&v:ans){
		cout<<v<<" ";
	}
	cout<<"\n";
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
