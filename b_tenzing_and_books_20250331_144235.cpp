/*
 * Problem: B. Tenzing and Books
 * URL: https://codeforces.com/problemset/problem/1842/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    int arr[n],arr1[n],arr2[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	 for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	 for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	if(m==0) cout<<"Yes\n";
	else{
	vector<int>ans;
	 for(int i=0;i<n;i++){
		if((m|arr[i])==m) ans.push_back(arr[i]);
		else break;
	}
	for(int i=0;i<n;i++){
		if((m|arr1[i])==m) ans.push_back(arr1[i]);
		else break;
	}
	for(int i=0;i<n;i++){
		if((m|arr2[i])==m) ans.push_back(arr2[i]);
		else break;
	}
	if(ans.size()==0) cout<<"no\n";
	else{
		int fans=0;
		for(auto&v:ans) fans|=v;
		if(fans==m) cout<<"Yes\n";
		else cout<<"no\n";
	}
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
