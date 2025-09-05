/*
 * Problem: A. Increasing and Decreasing
 * URL: https://codeforces.com/contest/1864/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int x,y,n;cin>>x>>y>>n;
    int arr[n];arr[0]=x;arr[n-1]=y;bool flag=1;
    for(int i=n-2;i>=1;i--){
		arr[i]=arr[i+1]-(n-(i+1));
	}
	if(arr[1]-arr[0]<(n-1)) flag=0;
	if(flag){
		for(auto&v:arr) cout<<v<<" ";
		cout<<"\n";
	}
	else cout<<"-1\n";
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
