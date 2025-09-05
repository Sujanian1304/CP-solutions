/*
 * Problem: C - Uniqueness
 * URL: https://atcoder.jp/contests/abc398/tasks/abc398_c
 * Time Limit: 2.0 seconds
 * Memory Limit: 1024 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n;cin>>n;
    int arr[n];map<int,int> mp;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	int cnt=0;int ans=-1;
	for(int i=0;i<n;i++){
		if(mp[arr[i]]==1){
			if(arr[i]>=cnt){
				cnt=arr[i];
				ans=i;
			}
		}
		
	}
	if(ans==-1) cout<<"-1";
	else{
	cout<<ans+1;
}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment for multiple test cases
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
