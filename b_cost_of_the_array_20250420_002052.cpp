/*
 * Problem: B. Cost of the Array
 * URL: https://codeforces.com/contest/2059/problem/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(m==n){
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(i%2)ans.push_back(arr[i]);
	}
	ans.push_back(0);
	for(int i=0;i<(int)ans.size();i++){
		if(ans[i]==i+1) continue;
		else {cout<<i+1<<"\n";return;}
	}
}
else{
	for(int i=1;i<n-m+2;i++){
		if(arr[i]!=1){cout<<1<<"\n";return;}
	}
	cout<<2<<"\n";
}
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
