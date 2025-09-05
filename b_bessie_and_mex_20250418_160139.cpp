/*
 * Problem: B. Bessie and MEX
 * URL: https://codeforces.com/contest/1942/problem/B
 * Time Limit: 1.5 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<int> ans(n);int mex=0;map<int,int> mp;
	if(arr[0]==1) {ans[0]=0;mex=1;mp[0]++;}
	else {ans[0]=-arr[0];mex=0;mp[ans[0]]++;}
	for(int i=1;i<n;i++){
		if(mex<arr[i]) mex=arr[i];
		int x=mex-arr[i];
		while(mp[x]>0){
			x++;
		}
		ans[i]=x;mp[x]++;
		mex=x+arr[i];
	}
	for(auto&v:ans) cout<<v<<" ";
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
