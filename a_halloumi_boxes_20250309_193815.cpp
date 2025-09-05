/*
 * Problem: A. Halloumi Boxes
 * URL: https://codeforces.com/contest/1903/problem/A
 * Time Limit: 1.0 seconds
 * Memory Limit: 256 MB
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    // Your solution here
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0;int cnt=1;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			cnt++;
		}else{
			ans=max(ans,cnt);
			cnt=1;
			}
	}
	ans=max(ans,cnt);
	if(m==1&&ans>1) cout<<"NO\n";
	else cout<<"YES\n";
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
