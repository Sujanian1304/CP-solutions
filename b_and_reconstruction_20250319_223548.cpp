/*
 * Problem: B. AND Reconstruction
 * URL: https://codeforces.com/problemset/problem/1991/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	vector<int> ans;ans.push_back(arr[0]);
	for(int i=0;i<n-2;i++){
		ans.push_back((arr[i]|arr[i+1]));
	}
	ans.push_back(arr[n-2]);
	//for(auto&v:ans) cout<<v<<" ";
	bool flag=1;
	for(int i=0;i<n-1;i++){
		if((ans[i]&ans[i+1])!=arr[i]) {flag=0;break;}
	}
	if(flag) for(auto&v:ans) cout<<v<<" ";
	else cout<<"-1";
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
