/*
 * Problem: C1. Skibidus and Fanum Tax (easy version)
 * URL: https://codeforces.com/contest/2065/problem/C1
 * Time Limit: 2.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;cin>>n>>m;
    vector<int>arr(n),brr(n);
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int b;cin>>b;
	if(n==1) {cout<<"YES\n";return;}
	arr[0]=min(arr[0],b-arr[0]);
	for(int i=1;i<n;i++){
		int x=arr[i];
		int y=b-arr[i];
		if(x>arr[i-1]&&y>arr[i-1]) arr[i]=min(x,y);
		else if(x>arr[i-1]) arr[i]=x;
		else arr[i]=y;
	}
	brr=arr;
	sort(brr.begin(),brr.end());
	if(arr==brr){cout<<"YES\n";}
	else cout<<"NO\n";
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
