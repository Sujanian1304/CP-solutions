/*
 * Problem: B. Crafting
 * URL: https://codeforces.com/problemset/problem/2055/B
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];int arr1[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int cnt=0;int x=1e9;int y=0;int cnt1=0;
	for(int i=0;i<n;i++){
		if(arr[i]<arr1[i]){ cnt++;y=arr1[i]-arr[i];}
		else if(arr1[i]==arr[i]) cnt1++;
		else x=min(x,arr[i]-arr1[i]);
	}
	if(cnt>1) cout<<"no\n";
	else if(cnt==1&&cnt1>0) cout<<"no\n";
	else{
		if(x>=y) cout<<"Yes\n";
		else cout<<"No\n";
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
