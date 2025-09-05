/*
 * Problem: B. Koxia and Permutation
 * URL: https://codeforces.com/problemset/problem/1770/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    int arr[n];int j=1;
    for(int i=0;i<n;i++){
		if(i&1LL) {arr[i]=j;j++;}
		else arr[i]=n+1-j;
	}
	for(auto&v:arr) cout<<v<<" ";
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
