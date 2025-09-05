/*
 * Problem: B. All Pairs Segments
 * URL: https://codeforces.com/contest/2019/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n];int pre[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}map<int,int> mp;
	for(int i=0;i<n;i++){
		if(i==0)pre[i]=(n-(i+1));
		else pre[i]=pre[i-1]+(n-(i+1));
		mp[pre[i]]++;
	}
	for(int i=0;i<m;i++){
		int a;cin>>a;
		cout<<mp[a]<<" ";
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
