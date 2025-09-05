/*
 * Problem: C1. Bessie's Birthday Cake (Easy Version)
 * URL: https://codeforces.com/contest/1942/problem/C1
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,x,y;cin>>n>>x>>y;
    vector<int> arr(x);
    for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	if(x==n){cout<<n-2<<"\n";return;}
	else{
		int ans=x-2;
		int y=0;
		for(int i=0;i<x-1;i++){
			if(arr[i+1]-arr[i]==2) y++;
		}
		if((arr[0]+n)-arr[x-1]==2) y++;
		ans+=y;
		cout<<ans<<"\n";
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
