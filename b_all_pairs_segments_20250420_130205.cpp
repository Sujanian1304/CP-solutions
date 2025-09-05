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
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> brr(m);
    for(int i=0;i<m;i++) cin>>brr[i];
    map<int,int> mp;
    for(int i=0;i<n-1;i++){
		int x=(n-i)*i+(n-i-1);
		mp[x]++;
		int y=(n-i-1)*(i+1);
		mp[y]+=arr[i+1]-arr[i]-1;
	}
	mp[n-1]++;
	for(int i=0;i<m;i++){
		cout<<mp[brr[i]]<<" ";
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
