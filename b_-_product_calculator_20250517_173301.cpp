/*
 * Problem: B - Product Calculator
 * URL: https://atcoder.jp/contests/abc406/tasks/abc406_b
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> a(n);
    int b=1;
    for(int i=0;i<n;i++){ cin>>a[i];}
    int l=1;
    for(int i=0;i<m;i++){ l*=10ULL;}
    l-=1ULL;
    for(int i=0;i<n;i++){
		__int128 prod = __int128(b) * a[i];
		if(prod>l){
			b=1;
		}else{
		 b = (unsigned long long)prod;
	 }
	}
	cout<<b<<"\n";	
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
