/*
 * Problem: C. K-th Not Divisible by n
 * URL: https://codeforces.com/problemset/problem/1352/C
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int lo=1;int hi=1e9;int ans=0;
    while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		if(mid*n-mid>=m){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}
	int y=(ans*n-ans)-m;
	cout<<ans*n-(y+1)<<"\n";
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
