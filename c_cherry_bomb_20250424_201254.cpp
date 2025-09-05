/*
 * Problem: C. Cherry Bomb
 * URL: https://codeforces.com/contest/2106/problem/C
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int>arr(n),brr(n);int ma=0;int mi=1e9;
    for(int i=0;i<n;i++){
		cin>>arr[i];
		ma=max(arr[i],ma);
		mi=min(arr[i],mi);
	}
	for(int i=0;i<n;i++){
		cin>>brr[i];
	}
	int sum=-1;
	for(int i=0;i<n;i++){
		if(brr[i]!=-1){
			if(sum==-1) sum=arr[i]+brr[i];
			else if(sum!=arr[i]+brr[i]){cout<<"0\n";return;}
		}
	}
	if(sum==-1){
		int ans=((mi+m)-ma)+1;
		cout<<ans<<"\n";
		return;
	}
	for(int i=0;i<n;i++){
		if(sum<arr[i]) {cout<<"0\n";return;}
		if(sum-arr[i]>m) {cout<<"0\n";return;}
	}
	cout<<"1\n";
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
